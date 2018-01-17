/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   modulus_cpx.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 16:39:08 by yguaye            #+#    #+#             */
/*   Updated: 2018/01/17 16:44:11 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libft_math/complex.h"

double				modulus_cpx(t_cpx *op)
{
	return (sqrt(op->re * op->re + op->im * op->im));
}
