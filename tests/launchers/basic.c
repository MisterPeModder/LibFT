/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   basic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 18:51:55 by yguaye            #+#    #+#             */
/*   Updated: 2018/06/09 20:03:18 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "launchers.h"
#include "tests/basic/tests.h"

void				*launcher_basic(void)
{
	void			*lst;

	lst = NULL;
	add_unit_test(&lst, "always_ok", &always_ok);
	add_unit_test(&lst, "always_ko", &always_ko);
	add_unit_test(&lst, "always_segv", &always_segv);
	add_unit_test(&lst, "always_sigabort", &always_sigabort);
	return (lst);
}
