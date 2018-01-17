/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div_cpx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 16:17:07 by yguaye            #+#    #+#             */
/*   Updated: 2018/01/17 16:29:39 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math/complex.h"

t_cpx				*div_cpx(t_cpx *lhs, t_cpx *rhs)
{
	double			div;

	div = rhs->re * rhs->re + rhs->im * rhs->im;
	return (new_cpx((lhs->re * rhs->re + lhs->im * rhs->im) / div,
				(lhs->im * rhs->re - lhs->re * rhs->im) / div));
}
