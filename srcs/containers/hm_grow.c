/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hm_grow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/17 04:52:44 by yguaye            #+#    #+#             */
/*   Updated: 2018/04/17 06:10:16 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_containers/hashmap.h"

static t_hmnode			**hm_make_new_buckets(t_hashmap *map)
{
	t_hmnode			**nbuckets;
	size_t				nsize;
	size_t				i;

	nsize = map->length << 1;
	if (!(nbuckets = (t_hmnode **)malloc(sizeof(t_hmnode *) * nsize)))
		return (NULL);
	i = 0;
	while (i < nsize)
		nbuckets[i++] = NULL;
	return (nbuckets);
}

void					hm_grow(t_hashmap *map)
{
	t_hmnode			**nbuckets;
	size_t				i;
	t_hmnode			*curr;

	if (!(nbuckets = hm_make_new_buckets(map)))
		return ;
	i = 0;
	while (i < map->length)
	{
		curr = map->buckets[i];
		while (curr)
		{
			nbuckets[hm_hash(curr->key) & ((map->length << 1) - 1)] = curr;
			curr = curr->next;
		}
		++i;
	}
	free(map->buckets);
	map->buckets = nbuckets;
	map->length <<= 1;
}
