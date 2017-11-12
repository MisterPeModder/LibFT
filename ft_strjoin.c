/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/12 21:02:38 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/12 21:09:13 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	ls1;

	ls1 = ft_strlen(s1);
	if (!(res = ft_strnew(ls1 + ft_strlen(s2))))
		return (NULL);
	ft_strcpy(res, s1);
	ft_strcpy(res + ls1, s2);
	return (res);
}
