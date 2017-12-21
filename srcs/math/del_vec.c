/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_vec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 13:14:08 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/21 13:26:13 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_math/vectors.h"

void				del_vec2(void **vec2)
{
	t_vec2x			*vecx;

	vecx = (t_vec2x *)*vec2;
	free(vecx->x);
	free(vecx->y);
	free(vecx);
	*vec2 = NULL;
}

void				del_vec3(void **vec3)
{
	t_vec3x			*vecx;

	vecx = (t_vec3x *)*vec3;
	free(vecx->x);
	free(vecx->y);
	free(vecx->z);
	free(vecx);
	*vec3 = NULL;
}

void				del_vec4(void **vec4)
{
	t_vec4x			*vecx;

	vecx = (t_vec4x *)*vec4;
	free(vecx->x);
	free(vecx->y);
	free(vecx->z);
	free(vecx->w);
	free(vecx);
	*vec4 = NULL;
}
