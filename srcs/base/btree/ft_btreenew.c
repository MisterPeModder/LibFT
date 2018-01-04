/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreenew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 08:59:12 by yguaye            #+#    #+#             */
/*   Updated: 2018/01/04 15:19:08 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_base/btree.h"
#include "libft_base/memory.h"

t_btree				*ft_btreenew(const void *content, size_t content_size)
{
	t_btree			*node;

	if (!(node = (t_btree *)malloc(sizeof(t_btree))))
		return (NULL);
	if (!(node->content = malloc(content_size)))
	{
		free(node);
		return (NULL);
	}
	node->parent = NULL;
	node->left = ft_btreeleaf(NULL);
	node->right = node->left;
	node->color = BT_BLACK;
	ft_memcpy(node->content, content, content_size);
	node->content_size = content_size;
	return (node);
}

t_btree				*ft_btreenew2(void *content, size_t content_size)
{
	t_btree			*node;

	if (!(node = (t_btree *)malloc(sizeof(t_btree))))
		return (NULL);
	node->parent = NULL;
	node->left = NULL;
	node->right = NULL;
	node->color = BT_BLACK;
	node->content = content;
	node->content_size = content_size;
	return (node);
}
