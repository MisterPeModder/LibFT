/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_to_lst.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 23:22:07 by yguaye            #+#    #+#             */
/*   Updated: 2017/11/13 23:41:03 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list		*ft_array_to_lst(void **array, size_t len, size_t val_size)
{
	t_list	*lst;
	size_t	i;
	void	*val;
	t_list	*tmp;

	lst = (t_list *)NULL;
	i = 0;
	while (i < len)
	{
		if (!(val = malloc(val_size)))
			return ((t_list *)NULL);
		if (!(tmp = ft_lstnew(ft_memcpy(val, *array + i, val_size), val_size)))
			return ((t_list *)NULL);
		tmp->next = lst;
		lst = tmp;
		++i;
	}
	return (lst);
}
