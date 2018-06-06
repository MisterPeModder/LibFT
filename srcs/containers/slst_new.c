/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slst_new.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 08:58:06 by yguaye            #+#    #+#             */
/*   Updated: 2018/06/06 09:00:11 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_containers/slist.h"

void				*slst_new(size_t size)
{
	t_slist			*lst;

	if (size < sizeof(t_slist) || !(lst = (t_slist *)malloc(size)))
		return (NULL);
	lst->prev = NULL;
	lst->next = NULL;
	return (lst);
}
