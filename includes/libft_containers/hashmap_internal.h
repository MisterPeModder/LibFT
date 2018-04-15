/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hashmap_internal.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 12:34:43 by yguaye            #+#    #+#             */
/*   Updated: 2018/04/15 12:48:29 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HASHMAP_INTERNAL_H
# define HASHMAP_INTERNAL_H

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

void					hm_release_node(t_hmnode *n);

size_t					hm_bucket_size(t_hmnode *node);

#endif
