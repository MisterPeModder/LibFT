/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreeadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 10:18:01 by yguaye            #+#    #+#             */
/*   Updated: 2018/01/04 11:19:40 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_base/btree.h"

void				ft_btreeadd(t_btree **root, const void *content,
		size_t content_size, int (*cmp)(t_btree *, t_btree *))
{
	t_btree			*node;

	if (!(node = ft_btreenew(content, content_size)))
		return ;
	ft_btreeinsert(root, node, cmp);
}
