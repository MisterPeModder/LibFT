/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 22:14:47 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/13 22:24:58 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd(t_list **alst, t_list *nlst)
{
	t_list	*curr;

	if (!*alst)
		*alst = nlst;
	else
	{
		curr = *alst;
		while (curr->next)
			curr = curr->next;
		curr->next = nlst;
	}
}
