/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slst_release.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 09:22:55 by yguaye            #+#    #+#             */
/*   Updated: 2018/06/06 09:32:28 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_containers/slist.h"

void				slst_release(t_slist **lst, void (*d)(void *))
{
	t_slist			*curr;
	t_slist			*tmp;

	if (!lst)
		return ;
	curr = *lst;
	while (curr)
	{
		tmp = curr->next;
		if (d)
			(*d)((t_slist *)curr);
		free(curr);
		curr = tmp;
	}
	*lst = NULL;
}
