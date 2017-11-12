/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 21:15:27 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/12 21:24:53 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;
	char	*res;

	i = 0;
	len = 0;
	while (s[i])
	{
		if (!(s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
			++len;
		++i;
	}
	if (!(res = ft_strnew(len)))
		return (NULL);
	i = 0;
	len = 0;
	while (s[i])
	{
		if (!(s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
			res[len++] = s[i];
		++i;
	}
	return (res);
}
