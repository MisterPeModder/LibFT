/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 15:26:00 by yguaye            #+#    #+#             */
/*   Updated: 2018/08/20 15:26:27 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_base/base.h"

int			ft_strisint(const char *str)
{
	int		i;

	i = 0;
	while (str[i] && ft_isspace((int)str[i]))
		++i;
	if (str[i] == '-' || str[i] == '+')
		++i;
	while (str[i] && ft_isdigit(str[i]))
		++i;
	return (1);
}
