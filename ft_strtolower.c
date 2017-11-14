/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 23:18:46 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/13 23:19:26 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_char_tolower(char *c)
{
	*c = ft_tolower(*c);
}

char		*ft_strtolower(char *str)
{
	ft_striter(str, &ft_char_tolower);
}
