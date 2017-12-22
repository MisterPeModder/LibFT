/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addf_vec4.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 09:41:24 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 09:41:30 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math/vec4.h"

t_vec4				*addf_vec4(t_vec4 **lhs, t_vec4 **rhs)
{
	t_vec4			*res;

	res = add_vec4(*lhs, *rhs);
	del_vec4(lhs);
	del_vec4(rhs);
	return (res);
}

t_vec4				*addf1_vec4(t_vec4 **lhs, const t_vec4 *rhs)
{
	t_vec4			*res;

	res = add_vec4(*lhs, rhs);
	del_vec4(lhs);
	return (res);
}

t_vec4				*addf2_vec4(const t_vec4 *lhs, t_vec4 **rhs)
{
	t_vec4			*res;

	res = add_vec4(lhs, *rhs);
	del_vec4(rhs);
	return (res);
}
