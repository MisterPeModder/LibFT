/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mul_cpx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 13:58:29 by yguaye            #+#    #+#             */
/*   Updated: 2018/01/17 16:29:27 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math/complex.h"

t_cpx				*mul_cpx(t_cpx *lhs, t_cpx *rhs)
{
	return (new_cpx(lhs->re * rhs->re - lhs->im * rhs->im,
				lhs->im * rhs->re + lhs->re * rhs->im));
}
