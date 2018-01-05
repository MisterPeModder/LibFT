/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreeiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 10:22:33 by yguaye            #+#    #+#             */
/*   Updated: 2018/01/05 08:37:16 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdio.h>
#include "libft_base/btree.h"

void 				ft_btreeiter(const t_btree *n, void (*f)(const t_btree *))
{
	if (n->left && !IS_LEAF(n->left))
		ft_btreeiter(n->left, f);
	(*f)(n);
	if (n->right && !IS_LEAF(n->right))
		ft_btreeiter(n->right, f);
}
