/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_vec4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 09:40:30 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 09:47:47 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_math/vec4.h"

t_vec4				*add_vec4(const t_vec4 *lhs, const t_vec4 *rhs)
{
	t_vec4			*res;

	if (lhs->vec4x.type != rhs->vec4x.type ||
			!(res = (t_vec4 *)malloc(sizeof(t_vec4))))
		return (NULL);
	res->vec4x.type = lhs->vec4x.type;
	res->vec4x.x = add_vecnum(lhs->vec4x.type, lhs->vec4x.x, rhs->vec4x.x);
	res->vec4x.y = add_vecnum(lhs->vec4x.type, lhs->vec4x.y, rhs->vec4x.y);
	res->vec4x.z = add_vecnum(lhs->vec4x.type, lhs->vec4x.z, rhs->vec4x.z);
	res->vec4x.w = add_vecnum(lhs->vec4x.type, lhs->vec4x.w, rhs->vec4x.w);
	return (res);
}

t_vec4i				*add_vec4i(const t_vec4i *lhs, const t_vec4i *rhs)
{
	return ((t_vec4i *)add_vec4((t_vec4 *)lhs, (t_vec4 *)rhs));
}

t_vec4f				*add_vec4f(const t_vec4f *lhs, const t_vec4f *rhs)
{
	return ((t_vec4f *)add_vec4((t_vec4 *)lhs, (t_vec4 *)rhs));
}

t_vec4d				*add_vec4d(const t_vec4d *lhs, const t_vec4d *rhs)
{
	return ((t_vec4d *)add_vec4((t_vec4 *)lhs, (t_vec4 *)rhs));
}
