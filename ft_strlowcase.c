/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 16:51:34 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/14 16:51:44 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_char_tolower(char *c)
{
	*c = ft_tolower(*c);
}

char		*ft_strlowcase(char *str)
{
	ft_striter(str, &ft_char_tolower);
	return (str);
}
