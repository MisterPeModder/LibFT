/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/13 15:59:22 by yguaye            #+#    #+#             */
/*   Updated: 2018/04/15 12:58:03 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHMAP_H
# define HASHMAP_H

# include "hashmap_internal.h"

/*
** hm_make: Creates a new empty hashmap.
**
** -power: A power of two.
**         The number of buckets is the result of the operation 2**power.
**         If 0 is given, then power is set to HM_DEFAULT_POWER
**         (see "hashmap_internal.h")
**
**         A bigger number of buckets means better perfomance at the
**         cost of memory.
**
** returns: The hashmap instance.
*/
t_hashmap				*hm_make(size_t power);

/*
** hm_release: Frees the passed hashmap and sets the pointer to NULL.
*/
void					hm_release(t_hashmap **map);

/*
** hm_put: Puts/updates a key-value pair in the passed hashmap.
*/
void					hm_put(t_hashmap *map, const char *key, void *value);

/*
** hm_put_cpy: Same as hm_put() but the value parameter is copied instead of
**             being directly put into the map.
**
** -size: Size of the value in bytes.
*/
void					hm_put_cpy(t_hashmap *map, const char *key,
		const void *val, size_t size);

/*
** hm_get: Searches the passed hashmap instance for the given key.
**
** returns: The value corresponding to the key if found, NULL otherwise.
*/
void					*hm_get(t_hashmap *map, const char *key);

/*
** hm_del: Deletes a key-value pair in the passed hashmap and frees it.
*/
void					hm_del(t_hashmap *map, const char *key);

/*
** hm_collisions: Counts the number of elements that collides with each other.
**                A collision happens when two or more  elements get stored
**                in the same bucket thus decreasing the performance.
*/
size_t					hm_collisions(t_hashmap *map);

/*
** hm_length: Returns the number of elements stored in the passed hashmap.
*/
size_t					hm_length(t_hashmap *map);

#endif
