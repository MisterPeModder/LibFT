/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtablen.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/18 01:41:58 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/18 01:43:34 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_base/base.h"

size_t		ft_strtablen(char **tab)
{
	size_t	size;

	size = 0;
	while (tab && tab[size])
		++size;
	return (size);
}
