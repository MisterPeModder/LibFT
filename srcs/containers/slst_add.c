/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slst_add.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 09:00:23 by yguaye            #+#    #+#             */
/*   Updated: 2018/06/06 09:32:12 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_containers/slist.h"

void				slst_add(t_slist **beg, void *nlst)
{
	if (!nlst || !beg)
		return ;
	if (*beg)
	{
		if ((*beg)->prev)
			(*beg)->prev->next = (t_slist *)nlst;
		((t_slist *)nlst)->prev = (*beg)->prev;
		(*beg)->prev = (t_slist *)nlst;
		((t_slist *)nlst)->next = (*beg);
	}
	*beg = nlst;
}

void				*slst_addnew(t_slist **beg, size_t size)
{
	t_slist			*lst;

	if (!beg || !(lst = slst_new(size)))
		return (NULL);
	slst_add(beg, lst);
	return (lst);
}
