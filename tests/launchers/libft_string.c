/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/11 13:46:43 by yguaye            #+#    #+#             */
/*   Updated: 2018/06/11 14:14:41 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "launchers.h"
#include "tests/libft_string/tests.h"

void				*launcher_libft_string(void)
{
	void			*lst;

	lst = NULL;
	add_unit_test(&lst, "ft_strlen (simple)", &ft_strlen_simple);
	add_unit_test(&lst, "ft_strlen (empty)", &ft_strlen_empty);
	add_unit_test(&lst, "ft_strlen (big)", &ft_strlen_big);
	return (lst);
}
