/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_vec4.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 13:37:09 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/21 13:45:43 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_base/base.h"
#include "libft_math/vec4.h"

t_vec4			*new_vec4(t_vectype type, const void **xyzw, size_t size)
{
	t_vec4		*vec;
	t_vec4x		*vecx;

	if (!(vec = (t_vec4 *)malloc(sizeof(t_vec4))))
		return (NULL);
	vecx = &vec->vec4x;
	vecx->type = type;
	vecx->x = ft_memdup(xyzw[0], size);
	vecx->y = ft_memdup(xyzw[1], size);
	vecx->z = ft_memdup(xyzw[2], size);
	vecx->w = ft_memdup(xyzw[3], size);
	return (vecx->x && vecx->y && vecx->z && vecx-> w ? vec : NULL);
}

t_vec4i			*new_vec4i(int x, int y, int z, int w)
{
	void		*xyzw[4];

	xyzw[0] = &x;
	xyzw[1] = &y;
	xyzw[2] = &z;
	xyzw[3] = &w;
	return (&new_vec4(VEC_I, (const void **)xyzw, sizeof(int))->vec4i);
}

t_vec4f			*new_vec4f(float x, float y, float z, float w)
{
	void		*xyzw[4];

	xyzw[0] = &x;
	xyzw[1] = &y;
	xyzw[2] = &z;
	xyzw[3] = &w;
	return (&new_vec4(VEC_I, (const void **)xyzw, sizeof(float))->vec4f);
}

t_vec4d			*new_vec4d(double x, double y, double z, float w)
{
	void		*xyzw[4];

	xyzw[0] = &x;
	xyzw[1] = &y;
	xyzw[2] = &z;
	xyzw[3] = &w;
	return (&new_vec4(VEC_I, (const void **)xyzw, sizeof(double))->vec4d);
}
