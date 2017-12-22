/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   divf_vec3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 13:40:09 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 13:40:14 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math/vec3.h"
#include "libft_base/memory.h"

t_vec3				*divf_vec3(t_vec3 **lhs, void **rhs)
{
	t_vec3			*res;

	res = div_vec3(*lhs, *rhs);
	del_vec3(lhs);
	ft_memdel(rhs);
	return (res);
}

t_vec3				*divf1_vec3(t_vec3 **lhs, const void *rhs)
{
	t_vec3			*res;

	res = div_vec3(*lhs, rhs);
	del_vec3(lhs);
	return (res);
}

t_vec3				*divf2_vec3(const t_vec3 *lhs, void **rhs)
{
	t_vec3			*res;

	res = div_vec3(lhs, *rhs);
	ft_memdel(rhs);
	return (res);
}
