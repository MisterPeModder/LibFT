/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 23:06:14 by yguaye            #+#    #+#             */
/*   Updated: 2018/05/04 23:28:39 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_math/calc.h"

double					ft_pow(double nb, int power)
{
	double				value;

	value = nb;
	if (power > 0)
		while (power-- > 1)
			value *= nb;
	else
		value = power ? 0 : 1;
	return (value);
}
