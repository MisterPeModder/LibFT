/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoupper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 23:14:10 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/13 23:19:36 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_char_toupper(char *c)
{
	*c = ft_toupper(*c);
}

char		*ft_strtoupper(char *str)
{
	ft_striter(str, &ft_char_toupper);
}
