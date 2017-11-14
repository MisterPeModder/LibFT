/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_to_array.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 23:29:42 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/13 23:48:11 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		**ft_lst_to_array(t_list *lst)
{
	void	**tab;
	size_t	i;
	void	*val;

	if (!lst || !(tab = (void **)malloc(sizeof(void *) * ft_lstlen(lst))))
		return ((void **)NULL);
	i = 0;
	while (lst)
	{
		if (!(val = malloc(lst->content_size)))
			return ((void **)NULL);
		tab[i] = ft_memcpy(val, lst->content, lst->content_size);
		lst = lst->next;
	}
	return (tab);
}
