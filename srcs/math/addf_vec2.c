/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_fvec2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 09:15:56 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 09:18:39 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math/vec2.h"

t_vec2				*addf_vec2(t_vec2 **lhs, t_vec2 **rhs)
{
	t_vec2			*res;

	res = add_vec2(*lhs, *rhs);
	del_vec2(lhs);
	del_vec2(rhs);
	return (res);
}

t_vec2				*addf1_vec2(t_vec2 **lhs, const t_vec2 *rhs)
{
	t_vec2			*res;

	res = add_vec2(*lhs, rhs);
	del_vec2(lhs);
	return (res);
}

t_vec2				*addf2_vec2(const t_vec2 *lhs, t_vec2 **rhs)
{
	t_vec2			*res;

	res = add_vec2(lhs, *rhs);
	del_vec2(rhs);
	return (res);
}
