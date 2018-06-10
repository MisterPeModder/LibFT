/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 17:05:49 by yguaye            #+#    #+#             */
/*   Updated: 2018/06/10 19:28:29 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "test.h"

static void			handle_signals(int status, int is_timeout)
{
	const char		*sig;

	fputs(BOLD, stdout);
	if (is_timeout)
		fputs(BLUE "[TIMEOUT", stdout);
	else if (WIFSIGNALED(status))
	{
		fputs(RED "[", stdout);
		sig = sys_signame[WTERMSIG(status)];
		while (*sig)
		{
			putc(toupper(*sig), stdout);
			++sig;
		}
	}
	else if (WEXITSTATUS(status) == EXIT_SUCCESS)
		fputs(GREEN "[OK", stdout);
	else
		fputs(YELLOW "[KO", stdout);
	puts("]" RESET);
}

static int			split(t_utest *lst)
{
	t_utest			*curr;
	int				status;
	int				ret;

	curr = lst;
	while (curr)
	{
		if (!launch_child(curr))
			return (EXIT_FAILURE);
		printf("%s (" MAGENTA "%lli" RESET "): ",
				curr->name, (long long)curr->pid);
		fflush(stdout);
		if (!(ret = wait_for_child(curr->pid, &status)))
			return (EXIT_FAILURE);
		handle_signals(status, (ret == 1 ? 0 : 1));
		curr = curr->next;
	}
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
