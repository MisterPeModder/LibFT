/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreeinsert2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 09:59:01 by yguaye            #+#    #+#             */
/*   Updated: 2018/01/07 17:38:16 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_base/btree.h"

static void			ft_btree_rotate_l(t_btree *n)
{
	t_btree			*nnew;

	nnew = n->right;
	n->right = nnew->left;
	nnew->left = n;
	nnew->parent = n->parent;
	n->parent = nnew;
}

static void			ft_btree_rotate_r(t_btree *n)
{
	t_btree			*nnew;

	nnew = n->left;
	n->left = nnew->right;
	nnew->right = n;
	nnew->parent = n->parent;
	n->parent = nnew;
}

void				ft_btree_tryrotate(t_btree *n)
{
	t_btree			*p;
	t_btree			*g;

	p = n->parent;
	if (!p || !(g = p->parent))
		return ;
	if (n == g->left->right)
	{
		ft_btree_rotate_l(p);
		n = n->left;
	}
	else if (n == g->right->left)
	{
		ft_btree_rotate_r(p);
		n = n->right;
	}
	if (n == p->left)
		ft_btree_rotate_r(g);
	else
		ft_btree_rotate_l(g);
	p->color = BT_BLACK;
	g->color = BT_RED;
}
