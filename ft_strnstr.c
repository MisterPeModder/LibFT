/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:43:50 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/12 19:54:55 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lneedle;
	char	*hs;
	char	*ne;

	hs = (char *)haystack;
	ne = (char *)needle;
	if (!ne)
		return (hs);
	i = 0;
	lneedle = ft_strlen(needle);
	i = 0;
	while (i <= len && hs[i])
	{
		j = 0;
		while (ne[j] && *(hs + i + j) == ne[j])
			++i;
		if (j == lneedle)
			return (hs + i);
		++i;
	}
	return (NULL);
}
