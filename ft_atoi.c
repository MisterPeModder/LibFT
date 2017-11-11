/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 12:49:29 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/11 14:32:13 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int sign;
	int num;

	i = 0;
	while (str[i] && ISSPACE(str[i]))
		++i;
	sign = 1;
	if (str[i] && str[i] == '-')
	{
		sign = -1;
		++i;
	}
	num = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		num *= 10;
		num += str[i] - '0';
		++i;
	}
	return (sign * num);
}
