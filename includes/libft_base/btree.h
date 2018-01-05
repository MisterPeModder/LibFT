/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 08:43:27 by yguaye            #+#    #+#             */
/*   Updated: 2018/01/04 17:14:58 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTREE_H
# define BTREE_H

# include <string.h>

# define IS_LEAF(node) (node && node == ft_btreeleaf(NULL))

enum				u_btcolor
{
	BT_BLACK = 0,
	BT_RED,
};

typedef struct		s_btree
{
	struct s_btree	*parent;
	struct s_btree	*left;
	struct s_btree	*right;
	int				color;
	size_t			content_size;
	void			*content;
}					t_btree;

void				ft_btreeadd(t_btree **root, const void *content,
		size_t content_size, int (*cmp)(t_btree *, t_btree *));

void				ft_btreedel(t_btree **tree, void (*del)(void *, size_t));

void				ft_btreedel2(t_btree **tree, void (*del)(void *));

void				ft_btreedelone(t_btree **tree, void (*del)(void *, size_t));

void				ft_btreedelone2(t_btree **tree, void (*del)(void *));

void				ft_btreeinsert(t_btree **root, t_btree *node,
		int (*cmp)(t_btree *, t_btree *));

void				ft_btreeiter(const t_btree *n, void (*f)(const t_btree *));

t_btree				*ft_btreeleaf(t_btree *leaf);

t_btree				*ft_btreenew(const void *content, size_t content_size);

t_btree				*ft_btreenew2(void *content, size_t content_size);

void				ft_btree_tryrotate(t_btree *n);

#endif
