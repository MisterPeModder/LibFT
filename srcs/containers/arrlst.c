/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrlst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 14:04:57 by yguaye            #+#    #+#             */
/*   Updated: 2018/06/09 16:05:05 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_base/memory.h"
#include "libft_containers/array_list.h"

t_arrlst			*arrlst_new(size_t start_capacity)
{
	t_arrlst		*lst;
	size_t			i;

	if (start_capacity == 0)
		start_capacity = ARRLST_DEFAULT_SIZE;
	if (!(lst = malloc(sizeof(t_arrlst))))
		return (NULL);
	if (!(lst->elements = (void **)malloc(sizeof(void *) * start_capacity)))
	{
		free(lst);
		return (NULL);
	}
	lst->capacity = start_capacity;
	lst->size = 0;
	i = 0;
	while (i < lst->capacity)
		lst->elements[i++] = NULL;
	return (lst);
}

int					arrlst_reserve(t_arrlst *lst, size_t new_capacity)
{
	void			**nelems;
	size_t			i;

	if (new_capacity <= lst->capacity)
		return (1);
	if (!(nelems = (void **)malloc(sizeof(void *) * new_capacity)))
		return (0);
	i = 0;
	while (i < lst->capacity)
	{
		nelems[i] = lst->elements[i];
		++i;
	}
	while (i < new_capacity)
		nelems[i++] = NULL;
	free(lst->elements);
	lst->elements = nelems;
	lst->capacity = new_capacity;
	return (1);
}

void				arrlst_del(t_arrlst **lst, void (*d)(void *))
{
	size_t			i;

	if (!lst)
		return ;
	if (!d)
		d = &free;
	i = 0;
	while (i < (*lst)->size)
	{
		(*d)((*lst)->elements[i++]);
	}
	free((*lst)->elements);
	free((*lst));
	*lst = NULL;
}

int					arrlst_add(t_arrlst *lst, void *e)
{
	if (++lst->size >= lst->capacity && !arrlst_reserve(lst, lst->capacity * 2))
		return (0);
	lst->elements[lst->size - 1] = e;
	return (1);
}

int					arrlst_add_cpy(t_arrlst *lst, const void *e, size_t size)
{
	void			*ne;

	if (++lst->size >= lst->capacity && !arrlst_reserve(lst, lst->capacity * 2))
		return (0);
	if (!(ne = ft_memdup(e, size)))
		return (0);
	lst->elements[lst->size - 1] = ne;
	return (1);
}
