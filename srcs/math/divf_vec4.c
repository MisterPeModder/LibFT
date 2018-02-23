/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divf_vec4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:40:25 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 13:40:29 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math/vec4.h"
#include "libft_base/memory.h"

t_vec4				*divf_vec4(t_vec4 **lhs, void **rhs)
{
	t_vec4			*res;

	res = div_vec4(*lhs, *rhs);
	del_vec4(lhs);
	ft_memdel(rhs);
	return (res);
}

t_vec4				*divf1_vec4(t_vec4 **lhs, const void *rhs)
{
	t_vec4			*res;

	res = div_vec4(*lhs, rhs);
	del_vec4(lhs);
	return (res);
}

t_vec4				*divf2_vec4(const t_vec4 *lhs, void **rhs)
{
	t_vec4			*res;

	res = div_vec4(lhs, *rhs);
	ft_memdel(rhs);
	return (res);
}
