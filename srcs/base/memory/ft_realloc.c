/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 06:04:23 by yguaye            #+#    #+#             */
/*   Updated: 2018/07/03 07:06:46 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_base/memory.h"

int					ft_realloc(void **mem, size_t old_size, size_t new_size)
{
	void			*ret;

	if (old_size >= new_size)
		return (1);
	if (!mem || !(ret = malloc(new_size)))
		return (0);
	if (old_size && *mem)
		ft_memcpy(ret, *mem, old_size);
	ft_bzero(((char *)ret) + old_size, new_size - old_size);
	free(*mem);
	*mem = ret;
	return (1);
}
