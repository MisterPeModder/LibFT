/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_cpx.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 13:50:25 by yguaye            #+#    #+#             */
/*   Updated: 2018/01/17 13:52:24 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_math/complex.h"

t_cpx				*new_cpx(double real_part, double imaginary_part)
{
	t_cpx			*res;

	if (!(res = (t_cpx *)malloc(sizeof(t_cpx))))
		return (NULL);
	res->re = real_part;
	res->im = imaginary_part;
	return (res);
}
