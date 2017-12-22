/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mulf_vec3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 11:33:23 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 11:33:24 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math/vec3.h"
#include "libft_base/memory.h"

t_vec3				*mulf_vec3(t_vec3 **lhs, void **rhs)
{
	t_vec3			*res;

	res = mul_vec3(*lhs, *rhs);
	del_vec3(lhs);
	ft_memdel(rhs);
	return (res);
}

t_vec3				*mulf1_vec3(t_vec3 **lhs, const void *rhs)
{
	t_vec3			*res;

	res = mul_vec3(*lhs, rhs);
	del_vec3(lhs);
	return (res);
}

t_vec3				*mulf2_vec3(const t_vec3 *lhs, void **rhs)
{
	t_vec3			*res;

	res = mul_vec3(lhs, *rhs);
	ft_memdel(rhs);
	return (res);
}
