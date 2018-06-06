/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slst_len.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 09:37:41 by yguaye            #+#    #+#             */
/*   Updated: 2018/06/06 10:00:09 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_containers/slist.h"

size_t				slst_len(const void *lst)
{
	size_t			len;
	const t_slist	*curr;

	len = 0;
	curr = (const t_slist *)lst;
	while (curr)
	{
		++len;
		curr = curr->next;
	}
	return (len);
}
