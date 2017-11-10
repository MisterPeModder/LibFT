/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:15:57 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/10 16:33:03 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *str)
{
	char	*s;
	int		len;
	int		i;

	len = ft_strlen(str);
	if(!(s = (char *)malloc(sizeof(*str) * len)))
		return (NULL);
	i = 0;
	while (i <= len)
	{
		s[i] = str[i];
		++i;
	}
	return (s);
}
