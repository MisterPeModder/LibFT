/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_vec2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 11:03:19 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 09:28:45 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_math/vec2.h"
#include "libft_base/memory.h"

t_vec2			*new_vec2(t_vectype type, const void **xy, size_t size)
{
	t_vec2		*vec;
	t_vec2x		*vecx;

	if (!(vec = (t_vec2 *)malloc(sizeof(t_vec2))))
		return (NULL);
	vecx = &vec->vec2x;
	vecx->type = type;
	vecx->x = ft_memdup(xy[0], size);
	vecx->y = ft_memdup(xy[1], size);
	return (vecx->x && vecx->y ? vec : NULL);
}

t_vec2i			*new_vec2i(int x, int y)
{
	void		*xy[2];

	xy[0] = &x;
	xy[1] = &y;
	return (&new_vec2(VEC_I, (const void **)xy, sizeof(int))->vec2i);
}

t_vec2f			*new_vec2f(float x, float y)
{
	void		*xy[2];

	xy[0] = &x;
	xy[1] = &y;
	return (&new_vec2(VEC_F, (const void **)xy, sizeof(float))->vec2f);
}

t_vec2d			*new_vec2d(double x, double y)
{
	void		*xy[2];

	xy[0] = &x;
	xy[1] = &y;
	return (&new_vec2(VEC_D, (const void **)xy, sizeof(double))->vec2d);
}
