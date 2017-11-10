/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:18:05 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/10 10:47:32 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *d, const void *s, size_t n)
{
	void	*tmp;

	tmp = malloc(sizeof(unsigned char) * n);
	if (!tmp)
		return (d);
	ft_memcpy(tmp, s, n);
	ft_memcpy(d, tmp, n);
	free(tmp);
	return (d);
}
