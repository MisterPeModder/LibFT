/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launchers.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 19:00:59 by yguaye            #+#    #+#             */
/*   Updated: 2018/06/09 19:54:51 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "test.h"
#include "launchers.h"

const struct s_launcher launchers[] =
{
	{"basic", &launcher_basic},
	{NULL, NULL}
};

int					load_tests(const char *name, t_utest **test_loc)
{
	int				i;

	if (!test_loc)
		return (-1);
	i = 0;
	while (launchers[i].name != NULL && strcmp(launchers[i].name, name))
		++i;
	if (!launchers[i].name)
		return (0);
	if (!((*test_loc) = (*launchers[i].f)()))
		return (-1);
	return (1);
}
