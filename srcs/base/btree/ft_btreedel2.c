/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreedel2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 10:15:57 by yguaye            #+#    #+#             */
/*   Updated: 2018/01/04 17:01:33 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft_base/btree.h"

void				ft_btreedel2(t_btree **tree, void (*del)(void *))
{
	if ((*tree)->left)
		ft_btreedel2(&(*tree)->left, del);
	if ((*tree)->right)
		ft_btreedel2(&(*tree)->right, del);
	ft_btreedelone2(tree, del);
}

void				ft_btreedelone2(t_btree **node, void (*del)(void *))
{
	if (del)
		(*del)((*node)->content);
	free((*node)->content);
	free(*node);
	*node = NULL;
}
