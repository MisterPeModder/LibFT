/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:59:22 by yguaye            #+#    #+#             */
/*   Updated: 2018/04/15 10:37:34 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHMAP_H
# define HASHMAP_H

# include <stdlib.h>

# define HM_DEFAULT_POWER 10

typedef struct			s_hmnode
{
	char				*key;
	void				*value;
	struct s_hmnode		*next;
}						t_hmnode;

typedef struct			s_hashmap
{
	size_t				length;
	t_hmnode			**buckets;
}						t_hashmap;

/*
** djb2 hash algorithm
*/
long					hm_hash(const char *str);
t_hashmap				*hm_make(size_t power);
void					hm_release_node(t_hmnode *n);
void					hm_release(t_hashmap **map);
void					hm_put(t_hashmap *map, const char *key, void *value);
void					hm_put_cpy(t_hashmap *map, const char *key,
		const void *val, size_t size);
void					*hm_get(t_hashmap *map, const char *key);
void					hm_del(t_hashmap *map, const char *key);
size_t					hm_bucket_size(t_hmnode *node);
size_t					hm_collisions(t_hashmap *map);
size_t					hm_length(t_hashmap *map);

#endif
