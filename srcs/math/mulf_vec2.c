/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mulf_vec2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 11:03:57 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 11:06:02 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math/vec2.h"
#include "libft_base/memory.h"

t_vec2				*mulf_vec2(t_vec2 **lhs, void **rhs)
{
	t_vec2			*res;

	res = mul_vec2(*lhs, *rhs);
	del_vec2(lhs);
	ft_memdel(rhs);
	return (res);
}

t_vec2				*mulf1_vec2(t_vec2 **lhs, const void *rhs)
{
	t_vec2			*res;

	res = mul_vec2(*lhs, rhs);
	del_vec2(lhs);
	return (res);
}

t_vec2				*mulf2_vec2(const t_vec2 *lhs, void **rhs)
{
	t_vec2			*res;

	res = mul_vec2(lhs, *rhs);
	ft_memdel(rhs);
	return (res);
}
