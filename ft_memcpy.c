/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 09:27:47 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/10 09:52:37 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *restrict d, const void *restrict s, size_t n)
{
	unsigned char	*dst;
	unsigned char	*src;
	size_t			i;

	dst = (unsigned char *)d;
	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		dst[i] = src[i];
		++i;
	}
	dst[i] = 0;
	return (d);
}
