/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btreeiter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/04 10:22:33 by yguaye            #+#    #+#             */
/*   Updated: 2018/01/04 17:23:27 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  <stdio.h>
#include "libft_base/btree.h"

void 				ft_btreeiter(const t_btree *n, void (*f)(const t_btree *))
{
	if (n->left && !IS_LEAF(n->left))
	{
		if (n)
			printf("current: %c -> left\n", *(char *)n->content);
		fflush(stdout);
		ft_btreeiter(n->left, f);
	}
	printf("current: %c -> curr\n", *(char *)n->content);
	(*f)(n);
	if (n->right && !IS_LEAF(n->right))
	{
		if (n)
			printf("current: %c -> right\n", *(char *)n->content);
		fflush(stdout);
		ft_btreeiter(n->right, f);
	}
}
