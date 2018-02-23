/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crossf_product.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 15:27:51 by yguaye            #+#    #+#             */
/*   Updated: 2018/01/03 18:37:03 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math/vec3.h"

t_vec3				*crossf_vec3(t_vec3 **lhs, t_vec3 **rhs)
{
	t_vec3			*res;

	res = cross_vec3(*lhs, *rhs);
	del_vec3(lhs);
	del_vec3(rhs);
	return (res);
}

t_vec3				*crossf1_vec3(t_vec3 **lhs, const t_vec3 *rhs)
{
	t_vec3			*res;

	res = cross_vec3(*lhs, rhs);
	del_vec3(lhs);
	return (res);
}

t_vec3				*crossf2_vec3(const t_vec3 *lhs, t_vec3 **rhs)
{
	t_vec3			*res;

	res = cross_vec3(lhs, *rhs);
	del_vec3(rhs);
	return (res);
}
