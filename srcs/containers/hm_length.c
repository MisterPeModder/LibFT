/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hm_length.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 19:49:48 by yguaye            #+#    #+#             */
/*   Updated: 2018/04/15 09:59:30 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_containers/hashmap.h"

size_t					hm_bucket_size(t_hmnode *node)
{
	size_t				len;

	len = 0;
	while (node)
	{
		node = node->next;
		++len;
	}
	return (len);
}

size_t					hm_length(t_hashmap *map)
{
	size_t				i;
	size_t				len;

	i = 0;
	len = 0;
	while (i < map->length)
	{
		len += hm_bucket_size(map->buckets[i]);
		++i;
	}
	return (len);
}
