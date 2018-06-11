/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 17:05:49 by yguaye            #+#    #+#             */
/*   Updated: 2018/06/11 08:16:29 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include "test.h"

static void			handle_signals(int status, int is_timeout, int uc)
{
	const char		*sig;

	fputs(color(BOLD, uc), stdout);
	if (is_timeout)
		printf("%s[TIMEOUT", color(BLUE, uc));
	else if (WIFSIGNALED(status))
	{
		printf("%s[", color(RED, uc));
		sig = sys_signame[WTERMSIG(status)];
		while (*sig)
		{
			putc(toupper(*sig), stdout);
			++sig;
		}
	}
	else if (WEXITSTATUS(status) == EXIT_SUCCESS)
		printf("%s[OK", color(GREEN, uc));
	else
		printf("%s[KO", color(YELLOW, uc));
	printf("]%s\n", color(RESET, uc));
	fflush(stdout);
}

static int			split(t_utest *lst, int uc)
{
	t_utest			*curr;
	int				status;
	int				ret;

	curr = lst;
	while (curr)
	{
		if (!launch_child(curr))
			return (EXIT_FAILURE);
		printf("%s (%s%lli%s): ", curr->name,
				color(MAGENTA, uc), (long long)curr->pid, color(RESET, uc));
		fflush(stdout);
		if (!(ret = wait_for_child(curr->pid, &status, uc)))
			return (EXIT_FAILURE);
		handle_signals(status, (ret == 1 ? 0 : 1), uc);
		curr = curr->next;
	}
	return (EXIT_SUCCESS);
}

int					main(int ac, char **av)
{
	int				ret;
	struct s_core	core;

	core.tests = NULL;
	if (!(ret = get_args(ac, av, &core)))
		return (EXIT_FAILURE);
	else if (ret > 1)
	{
		puts("Usage: unit [--help] [--no-colors] [--] <\"test1\" ...>");
		return (ret == 2 ? EXIT_FAILURE : EXIT_SUCCESS);
	}
	if (!core.tests)
	{
		fputs("No unit test specified\n", stderr);
		return (EXIT_FAILURE);
	}
	ret = split(core.tests, core.use_colors);
	del_unit_tests(&core.tests);
	return (ret);
}
