/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:10:24 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/09 10:47:54 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict d, const void *restrict s, int c, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			i;

	dst = (unsigned char *)d;
	src = (unsigned char *)s;
	i = 0;
	while (src[i] != c && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	if (src[i] == c)
	{
		dst[++i] = 0;
		return (d + i);
	}
	return (NULL);
}
