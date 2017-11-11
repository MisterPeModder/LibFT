/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 11:23:46 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/11 22:28:08 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	char		*str1;
	char		*str2;
	size_t		i;

	str1 = (char *)s1;
	str2 = (char *)s2;
	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		++i;
	return (str1[i] - str2[i]);
}
