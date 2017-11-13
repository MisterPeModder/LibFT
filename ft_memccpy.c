/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:10:24 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/13 14:33:57 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *d, const void *s, int c, size_t n)
{
	unsigned char	*src;
	size_t			i;

	src = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return (d);
	while (src[i] != (unsigned char)c && i < n)
		++i;
	ft_memcpy(d, s, i + 1);
	if (i == n)
		return (NULL);
	return (d + i);
}
