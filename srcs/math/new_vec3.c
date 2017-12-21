/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_vec3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 13:34:33 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/21 13:45:24 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_base/base.h"
#include "libft_math/vec3.h"

t_vec3			*new_vec3(t_vectype type, const void **xyz, size_t size)
{
	t_vec3		*vec;
	t_vec3x		*vecx;

	if (!(vec = (t_vec3 *)malloc(sizeof(t_vec3))))
		return (NULL);
	vecx = &vec->vec3x;
	vecx->type = type;
	vecx->x = ft_memdup(xyz[0], size);
	vecx->y = ft_memdup(xyz[1], size);
	vecx->z = ft_memdup(xyz[2], size);
	return (vecx->x && vecx->y && vecx->z ? vec : NULL);
}

t_vec3i			*new_vec3i(int x, int y, int z)
{
	void		*xyz[3];

	xyz[0] = &x;
	xyz[1] = &y;
	xyz[2] = &z;
	return (&new_vec3(VEC_I, (const void **)xyz, sizeof(int))->vec3i);
}

t_vec3f			*new_vec3f(float x, float y, float z)
{
	void		*xyz[3];

	xyz[0] = &x;
	xyz[1] = &y;
	xyz[2] = &z;
	return (&new_vec3(VEC_I, (const void **)xyz, sizeof(float))->vec3f);
}

t_vec3d			*new_vec3d(double x, double y, double z)
{
	void		*xyz[3];

	xyz[0] = &x;
	xyz[1] = &y;
	xyz[2] = &z;
	return (&new_vec3(VEC_I, (const void **)xyz, sizeof(double))->vec3d);
}
