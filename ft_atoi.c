/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 12:49:29 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/13 18:17:46 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int		i;
	int		sign;
	int		num;
	int		len;

	i = 0;
	while (str[i] && ft_isspace((int)str[i]))
		++i;
	sign = 1;
	if (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		sign = str[i] == '-' ? -1 : 1;
		++i;
	}
	num = 0;
	len = 0;
	while (str[i] && ft_isdigit((int)str[i]))
	{
		num *= 10;
		num += str[i] - '0';
		++i;
	}
	return (sign * num);
}
