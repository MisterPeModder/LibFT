/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 17:05:49 by yguaye            #+#    #+#             */
/*   Updated: 2018/06/09 20:06:25 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <signal.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "test.h"

void				handle_signals(pid_t pid, int status)
{
	const char		*sig;

	if (pid == -1)
		perror("wait() failed");
	else if (WIFSIGNALED(status))
	{
		putc('[', stdout);
		sig = sys_signame[WTERMSIG(status)];
		while (*sig)
		{
			putchar(toupper(*sig));
			++sig;
		}
	}
	else if (WIFSTOPPED(status))
		fputs("[STOP", stdout);
	else if (WEXITSTATUS(status) == EXIT_SUCCESS)
		printf("[OK", stdout);
	else
		printf("[KO", stdout);
	printf("]\n");
}

static int			split(t_utest *lst)
{
	t_utest			*curr;
	pid_t			pid;
	int				status;

	curr = lst;
	while (curr)
	{
		if ((pid = fork()) == -1)
		{
			perror("fork() failed");
			return (EXIT_FAILURE);
		}
		if (pid == 0)
		{
			exit((*curr->test)() ? EXIT_SUCCESS : EXIT_FAILURE);
		}
		curr = curr->next;
	}
	while ((pid = wait(&status)) > 0)
		handle_signals(pid, status);
	return (EXIT_SUCCESS);
}

int					main(int ac, char **av)
{
	int				ret;
	t_utest			*lst;

	if (ac != 2)
	{
		fputs("Wrong number of arguments\n", stderr);
		return (EXIT_FAILURE);
	}
	if ((ret = load_tests(av[1], &lst)) != 1)
	{
		fputs((ret ? "Couldn't load tests\n" : "Unknown test name\n"), stderr);
		return (EXIT_FAILURE);
	}
	ret = split(lst);
	del_unit_tests(&lst);
	return (ret);
}
