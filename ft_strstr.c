/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 17:06:57 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/10 17:23:20 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	lneedle;
	char	*hs;
	char	*ne;

	hs = (char *)haystack;
	ne = (char *)needle;
	if (!ne)
		return (hs);
	i = 0;
	lneedle = ft_strlen(needle);
	while (*hs)
	{
		i = 0;
		while (ne[i] && *(hs + i) == ne[i])
			++i;
		if (i == lneedle)
			return (hs);
		++hs;
	}
	return (NULL);
}
