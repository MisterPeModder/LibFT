/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div_vec2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:26:30 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 13:26:45 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_math/vec2.h"

t_vec2				*div_vec2(const t_vec2 *lhs, const void *rhs)
{
	t_vec2			*res;

	if (!(res = (t_vec2 *)malloc(sizeof(t_vec2))))
		return (NULL);
	res->vec2x.type = lhs->vec2x.type;
	res->vec2x.x = div_vecnum(lhs->vec2x.type, lhs->vec2x.x, (void *)rhs);
	res->vec2x.y = div_vecnum(lhs->vec2x.type, lhs->vec2x.y, (void *)rhs);
	return (res);
}

t_vec2i				*div_vec2i(const t_vec2i *lhs, const int rhs)
{
	return ((t_vec2i *)div_vec2((t_vec2 *)lhs, &rhs));
}

t_vec2f				*div_vec2f(const t_vec2f *lhs, const float rhs)
{
	return ((t_vec2f *)div_vec2((t_vec2 *)lhs, &rhs));
}

t_vec2d				*div_vec2d(const t_vec2d *lhs, const double rhs)
{
	return ((t_vec2d *)div_vec2((t_vec2 *)lhs, &rhs));
}
