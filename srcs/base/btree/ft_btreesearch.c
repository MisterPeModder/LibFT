/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreesearch.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/05 10:18:03 by yguaye            #+#    #+#             */
/*   Updated: 2018/01/05 10:48:46 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_base/btree.h"

t_btree				*ft_btreesearch(t_btree *root, void *ref,
		int (*cmp)(t_btree *, void *))
{
	int				ret;

	if (!root)
		return (NULL);
	if ((ret = (*cmp)(root, ref)) == 0)
		return (root);
	else if (ret > 0 && root->left && !IS_LEAF(root->left))
		return (ft_btreesearch(root->left, ref, cmp));
	else if (root->right && !IS_LEAF(root->right))
		return (ft_btreesearch(root->right, ref, cmp));
	return (NULL);
}
