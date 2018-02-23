/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_vec2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 08:18:18 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 09:11:55 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_math/vec2.h"

t_vec2				*add_vec2(const t_vec2 *lhs, const t_vec2 *rhs)
{
	t_vec2			*res;

	if (lhs->vec2x.type != rhs->vec2x.type ||
			!(res = (t_vec2 *)malloc(sizeof(t_vec2))))
		return (NULL);
	res->vec2x.type = lhs->vec2x.type;
	res->vec2x.x = add_vecnum(lhs->vec2x.type, lhs->vec2x.x, rhs->vec2x.x);
	res->vec2x.y = add_vecnum(lhs->vec2x.type, lhs->vec2x.y, rhs->vec2x.y);
	return (res);
}

t_vec2i				*add_vec2i(const t_vec2i *lhs, const t_vec2i *rhs)
{
	return ((t_vec2i *)add_vec2((t_vec2 *)lhs, (t_vec2 *)rhs));
}

t_vec2f				*add_vec2f(const t_vec2f *lhs, const t_vec2f *rhs)
{
	return ((t_vec2f *)add_vec2((t_vec2 *)lhs, (t_vec2 *)rhs));
}

t_vec2d				*add_vec2d(const t_vec2d *lhs, const t_vec2d *rhs)
{
	return ((t_vec2d *)add_vec2((t_vec2 *)lhs, (t_vec2 *)rhs));
}
