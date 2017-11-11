/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 14:15:57 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/11 22:37:34 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*s;

	if(!(s = (char *)malloc(sizeof(*src) * (ft_strlen(src) + 1))))
		return (NULL);
	ft_strcpy(s, src);
	return (s);
}
