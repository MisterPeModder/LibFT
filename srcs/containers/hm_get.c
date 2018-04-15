/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hm_get.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 18:36:17 by yguaye            #+#    #+#             */
/*   Updated: 2018/04/15 10:19:56 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_base/stringft.h"
#include "libft_containers/hashmap.h"

void					*hm_get(t_hashmap *map, const char *key)
{
	size_t			i;
	t_hmnode		*curr;

	i = hm_hash(key) & (map->length - 1);
	curr = map->buckets[i];
	while (curr)
	{
		if (ft_strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}

void					hm_del(t_hashmap *map, const char *key)
{
	size_t			i;
	t_hmnode		*prev;
	t_hmnode		*curr;

	i = hm_hash(key) & (map->length - 1);
	prev = NULL;
	curr = map->buckets[i];
	while (curr)
	{
		if (ft_strcmp(curr->key, key) == 0)
		{
			if (prev)
				prev->next = curr->next;
			if (!prev && !curr->next)
			{
				hm_release_node(curr);
				map->buckets[i] = NULL;
			}
			else
				hm_release_node(curr);
			return ;
		}
		prev = curr;
		curr = curr->next;
	}
}
