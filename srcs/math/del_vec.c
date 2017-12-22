/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   del_vec.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 13:14:08 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 08:54:46 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_math/vectors.h"

void				del_vec2(t_vec2 **vec2)
{
	t_vec2x			*vecx;

	vecx = &(*vec2)->vec2x;
	free(vecx->x);
	free(vecx->y);
	free(vecx);
	*vec2 = NULL;
}

void				del_vec3(t_vec3 **vec3)
{
	t_vec3x			*vecx;

	vecx = &(*vec3)->vec3x;
	free(vecx->x);
	free(vecx->y);
	free(vecx->z);
	free(vecx);
	*vec3 = NULL;
}

void				del_vec4(t_vec4 **vec4)
{
	t_vec4x			*vecx;

	vecx = &(*vec4)->vec4x;
	free(vecx->x);
	free(vecx->y);
	free(vecx->z);
	free(vecx->w);
	free(vecx);
	*vec4 = NULL;
}
