/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subf_vec3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 10:43:28 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 10:43:32 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math/vec3.h"

t_vec3				*subf_vec3(t_vec3 **lhs, t_vec3 **rhs)
{
	t_vec3			*res;

	res = sub_vec3(*lhs, *rhs);
	del_vec3(lhs);
	del_vec3(rhs);
	return (res);
}

t_vec3				*subf1_vec3(t_vec3 **lhs, const t_vec3 *rhs)
{
	t_vec3			*res;

	res = sub_vec3(*lhs, rhs);
	del_vec3(lhs);
	return (res);
}

t_vec3				*subf2_vec3(const t_vec3 *lhs, t_vec3 **rhs)
{
	t_vec3			*res;

	res = sub_vec3(lhs, *rhs);
	del_vec3(rhs);
	return (res);
}
