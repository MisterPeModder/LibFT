/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   child.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/10 17:59:48 by yguaye            #+#    #+#             */
/*   Updated: 2018/06/10 19:25:17 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "test.h"

int					launch_child(t_utest *unit)
{
	if ((unit->pid = fork()) == -1)
	{
		perror("fork() failed");
		return (0);
	}
	if (unit->pid == 0)
		exit((*unit->test)() ? EXIT_SUCCESS : EXIT_FAILURE);
	return (1);
}

static inline void	chars_setback(int count)
{
	while (--count > 0)
		putc('\b', stdout);
}

static void			chars_erase(int count)
{
	while (--count > 0)
		putc(' ', stdout);
}

int					wait_for_child(pid_t pid, int *status)
{
	int				time;
	int				char_count;
	pid_t			ret;

	time = TIMEOUT_DELAY;
	char_count = 0;
	usleep(1000);
	while (time > 0)
	{
		chars_setback(char_count);
		chars_erase(char_count);
		chars_setback(char_count + 1);
		if ((ret = waitpid(pid, status, WNOHANG)) == -1)
			return (0);
		else if (ret > 0)
			return (1);
		fputs(BLUE, stdout);
		char_count = (time == TIMEOUT_DELAY ? 0 : printf("(time: %d)", time));
		fputs(RESET, stdout);
		fflush(stdout);
		sleep(1);
		--time;
	}
	chars_setback(char_count + 1);
	return (2);
}
