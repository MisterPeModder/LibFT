/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cross_product.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 14:18:32 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 15:51:16 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_math/vec3.h"

t_vec3				*cross_vec3(const t_vec3 *lhs, const t_vec3 *rhs)
{
	t_vec3x			*res;
	void			*a;
	void			*b;

	if (!(res = (t_vec3x *)malloc(sizeof(t_vec3x))))
		return (NULL);
	a = mul_vecnum(lhs->vec3x.type, lhs->vec3x.y, rhs->vec3x.z);
	b = mul_vecnum(lhs->vec3x.type, lhs->vec3x.z, rhs->vec3x.y);
	res->x = subf_vecnum(lhs->vec3x.type, &a, &b);
	a = mul_vecnum(lhs->vec3x.type, lhs->vec3x.z, rhs->vec3x.x);
	b = mul_vecnum(lhs->vec3x.type, lhs->vec3x.x, rhs->vec3x.z);
	res->y = subf_vecnum(lhs->vec3x.type, &a, &b);
	a = mul_vecnum(lhs->vec3x.type, lhs->vec3x.x, rhs->vec3x.y);
	b = mul_vecnum(lhs->vec3x.type, lhs->vec3x.y, rhs->vec3x.x);
	res->z = subf_vecnum(lhs->vec3x.type, &a, &b);
	return ((t_vec3 *)res);
}

t_vec3i				*cross_vec3i(const t_vec3i *lhs, const t_vec3i *rhs)
{
	return ((t_vec3i *)cross_vec3((t_vec3 *)lhs, (t_vec3 *)rhs));
}

t_vec3f				*cross_vec3f(const t_vec3f *lhs, const t_vec3f *rhs)
{
	return ((t_vec3f *)cross_vec3((t_vec3 *)lhs, (t_vec3 *)rhs));
}

t_vec3d				*cross_vec3d(const t_vec3d *lhs, const t_vec3d *rhs)
{
	return ((t_vec3d *)cross_vec3((t_vec3 *)lhs, (t_vec3 *)rhs));
}
