/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreeleaf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 15:04:41 by yguaye            #+#    #+#             */
/*   Updated: 2018/01/05 08:52:36 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft_base/btree.h"

t_btree				*ft_btreeleaf(t_btree *leaf)
{
	static t_btree	*val;

	if (!leaf)
		return (val);
	val = leaf;
	val->parent = NULL;
	val->left = NULL;
	val->right = NULL;
	val->color = BT_BLACK;
	val->content = NULL;
	val->content_size = 0;
	return (val);
}
