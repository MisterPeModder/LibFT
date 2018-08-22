/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrlst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 14:04:57 by yguaye            #+#    #+#             */
/*   Updated: 2018/08/22 06:45:14 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_base/memory.h"
#include "libft_base/stringft.h"
#include "libft_containers/array_list.h"

t_arrlst			*arrlst_new(size_t elem_size, size_t start_capacity)
{
	t_arrlst		*lst;

	if (start_capacity == 0)
		start_capacity = ARRLST_DEFAULT_SIZE;
	if (elem_size == 0 || !(lst = malloc(sizeof(t_arrlst))))
		return (NULL);
	if (!(lst->elements = malloc(elem_size * start_capacity)))
	{
		free(lst);
		return (NULL);
	}
	lst->capacity = start_capacity;
	lst->size = 0;
	lst->elem_size = elem_size;
	ft_bzero(lst->elements, lst->capacity * lst->elem_size);
	return (lst);
}

int					arrlst_reserve(t_arrlst *lst, size_t new_cap)
{
	if (!ft_realloc(&lst->elements, lst->capacity * lst->elem_size,
				new_cap * lst->elem_size))
		return (0);
	lst->capacity = new_cap;
	return (1);
}

void				arrlst_del(t_arrlst **lst, void *user,
		void (*d)(void *, void *))
{
	size_t			i;

	if (!lst || !*lst)
		return ;
	if (d)
	{
		i = 0;
		while (i < (*lst)->size)
			(*d)((void *)(((char *)(*lst)->elements) + i++), user);
	}
	free((*lst)->elements);
	free(*lst);
	*lst = NULL;
}

int					arrlst_add(t_arrlst *lst, const void *e)
{
	if (!e)
		return (1);
	if (++lst->size >= lst->capacity && !arrlst_reserve(lst, lst->capacity * 2))
		return (0);
	ft_memcpy((void *)((char *)lst->elements + lst->elem_size
				* (lst->size - 1)) , e, lst->elem_size);
	return (1);
}
