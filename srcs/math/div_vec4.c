/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div_vec4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:39:40 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 13:39:44 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_math/vec4.h"

t_vec4				*div_vec4(const t_vec4 *lhs, const void *rhs)
{
	t_vec4			*res;

	if (!(res = (t_vec4 *)malloc(sizeof(t_vec4))))
		return (NULL);
	res->vec4x.type = lhs->vec4x.type;
	res->vec4x.x = div_vecnum(lhs->vec4x.type, lhs->vec4x.x, (void *)rhs);
	res->vec4x.y = div_vecnum(lhs->vec4x.type, lhs->vec4x.y, (void *)rhs);
	res->vec4x.z = div_vecnum(lhs->vec4x.type, lhs->vec4x.z, (void *)rhs);
	res->vec4x.w = div_vecnum(lhs->vec4x.type, lhs->vec4x.w, (void *)rhs);
	return (res);
}

t_vec4i				*div_vec4i(const t_vec4i *lhs, const int rhs)
{
	return ((t_vec4i *)div_vec4((t_vec4 *)lhs, &rhs));
}

t_vec4f				*div_vec4f(const t_vec4f *lhs, const float rhs)
{
	return ((t_vec4f *)div_vec4((t_vec4 *)lhs, &rhs));
}

t_vec4d				*div_vec4d(const t_vec4d *lhs, const double rhs)
{
	return ((t_vec4d *)div_vec4((t_vec4 *)lhs, &rhs));
}
