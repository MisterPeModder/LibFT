/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slst_iter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 09:47:38 by yguaye            #+#    #+#             */
/*   Updated: 2018/06/06 09:51:20 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_containers/slist.h"

int					slst_iter(void *lst, void *user, int (*i)(void *, void *))
{
	t_slist			*curr;
	int				ret;

	if (!i)
		return (0);
	curr = (t_slist *)lst;
	ret = 0;
	while (curr && ret == 0)
	{
		ret = (*i)(curr, user);
		curr = curr->next;
	}
	return (ret);
}
