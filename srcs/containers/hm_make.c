/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hm_make.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 16:36:14 by yguaye            #+#    #+#             */
/*   Updated: 2018/04/15 09:59:35 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_containers/hashmap.h"

t_hashmap				*hm_make(size_t power)
{
	t_hashmap		*map;
	size_t			i;

	if (!(map = (t_hashmap *)malloc(sizeof(t_hashmap))))
		return (NULL);
	if (power == 0 || power >= sizeof(size_t) * 8)
		power = HM_DEFAULT_POWER;
	map->length = 1ul << power;
	if (!(map->buckets = (t_hmnode **)malloc(sizeof(void *) * map->length)))
	{
		free(map);
		return (NULL);
	}
	i = 0;
	while (i < map->length)
		map->buckets[i++] = NULL;
	return (map);
}

static void				hm_release_val(void **value)
{
	if (*value)
		free(*value);
	*value = NULL;
}

void					hm_release_node(t_hmnode *n)
{
	hm_release_val((void **)&n->key);
	hm_release_val(&n->value);
	hm_release_val((void **)&n);
}

void					hm_release(t_hashmap **map)
{
	size_t			i;
	t_hmnode		*n;
	t_hmnode		*tmp;

	if (!map || !*map)
		return ;
	i = 0;
	while (i < (*map)->length)
	{
		n = (*map)->buckets[i];
		while (n)
		{
			tmp = n->next;
			hm_release_node(n);
			n = tmp;
		}
		(*map)->buckets[i] = NULL;
		++i;
	}
	hm_release_val((void **)&(*map)->buckets);
	free(*map);
	*map = NULL;
}
