/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 17:20:15 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/09 17:24:35 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	size_t i;
	int l;

	i = 0;
	l = ft_strlen(s1);
	while (i <= n)
	{
		s1[l + i] = s2[i];
		++i;
	}
	s1[l + i] = 0;
	return (s1);
}
