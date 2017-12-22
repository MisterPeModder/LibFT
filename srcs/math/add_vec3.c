/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_vec3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 09:38:54 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 09:39:30 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_math/vec3.h"

t_vec3				*add_vec3(const t_vec3 *lhs, const t_vec3 *rhs)
{
	t_vec3			*res;

	if (lhs->vec3x.type != rhs->vec3x.type ||
			!(res = (t_vec3 *)malloc(sizeof(t_vec3))))
		return (NULL);
	res->vec3x.type = lhs->vec3x.type;
	res->vec3x.x = add_vecnum(lhs->vec3x.type, lhs->vec3x.x, rhs->vec3x.x);
	res->vec3x.y = add_vecnum(lhs->vec3x.type, lhs->vec3x.y, rhs->vec3x.y);
	res->vec3x.z = add_vecnum(lhs->vec3x.type, lhs->vec3x.z, rhs->vec3x.z);
	return (res);
}

t_vec3i				*add_vec3i(const t_vec3i *lhs, const t_vec3i *rhs)
{
	return ((t_vec3i *)add_vec3((t_vec3 *)lhs, (t_vec3 *)rhs));
}

t_vec3f				*add_vec3f(const t_vec3f *lhs, const t_vec3f *rhs)
{
	return ((t_vec3f *)add_vec3((t_vec3 *)lhs, (t_vec3 *)rhs));
}

t_vec3d				*add_vec3d(const t_vec3d *lhs, const t_vec3d *rhs)
{
	return ((t_vec3d *)add_vec3((t_vec3 *)lhs, (t_vec3 *)rhs));
}
