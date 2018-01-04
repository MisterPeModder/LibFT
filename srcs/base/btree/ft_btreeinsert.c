/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreeinsert.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 09:10:16 by yguaye            #+#    #+#             */
/*   Updated: 2018/01/04 17:43:19 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft_base/btree.h"

static void				ft_btreeins_r(t_btree *root, t_btree *node,
		int (*cmp)(t_btree *a, t_btree *b))
{
	if (root && (*cmp)(node, root) < 0)
	{
		if (!IS_LEAF(root->left))
		{
			ft_btreeins_r(root->left, node, cmp);
			return ;
		}
		else
			root->left = node;
	}
	else if (root)
	{
		if (!IS_LEAF(root->right))
		{
			ft_btreeins_r(root->right, node, cmp);
			return ;
		}
		else
			root->right = node;
	}
	node->parent = root;
	node->left = ft_btreeleaf(NULL);
	node->right = node->left;
	node->color = BT_RED;
}

static inline t_btree	*ft_btree_uncle(t_btree *n)
{
	t_btree				*p;

	p = n->parent;
	if (p == NULL || p->parent == NULL)
		return (NULL);
	return (p == p->parent->left ? p->parent->right : p->parent->left);
}

static void				ft_btree_repair(t_btree *node)
{
	t_btree			*tmp;

	tmp = ft_btree_uncle(node);
	if (!node->parent)
		node->color = BT_BLACK;
	else if (node->parent->color == BT_BLACK)
		return ;
	else if (tmp && tmp->color == BT_RED)
	{
		node->parent->color = BT_BLACK;
		tmp->color = BT_BLACK;
		tmp->parent->color = BT_RED;
		ft_btree_repair(tmp->parent);
	}
	else
		ft_btree_tryrotate(node);
}

void					ft_btreeinsert(t_btree **root, t_btree *node,
		int (*cmp)(t_btree *a, t_btree *b))
{
	if (root && !*root)
	{
		*root = node;
		node->color = BT_BLACK;
	}
	else if (*root)
	{
		ft_btreeins_r(*root, node, cmp);
		ft_btree_repair(node);
	}
	return ;
}
