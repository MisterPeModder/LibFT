/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_list.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 13:52:27 by yguaye            #+#    #+#             */
/*   Updated: 2018/07/03 06:39:41 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_LIST_H
# define ARRAY_LIST_H

# include <stdlib.h>

# define ARRLST_DEFAULT_SIZE 16

/*
** t_arrlst: A dynamic array of identically sized elements.
*/
typedef struct		s_arrlst
{
	size_t			size;
	size_t			capacity;
	size_t			elem_size;
	void			*elements;
}					t_arrlst;

/*
** arrlst_new: Creates a new array list.
**
** -elem_size: the size an element.
** -start_capacity: starting capacity of this list.
**                  if 0, then start_capacity is set to ARRLST_DEFAULT_SIZE.
*/
t_arrlst			*arrlst_new(size_t elem_size, size_t start_capacity);

/*
** arrlst_reserve: Makes the list bigger.
**
** returns: 1 if success or new_capacity <= to capacity, 0 if otherwise.
*/
int					arrlst_reserve(t_arrlst *lst, size_t new_capacity);

/*
** arrlst_del: Frees the passed array list.
**
** -d: A function that will be called for each element of this list.
**     first parameter: the current list element
**     second parameter: the supplied user pointer.
**     May be NULL.
** -user: a pointer that will be passed to the 'd' function. (if not NULL)
*/
void				arrlst_del(t_arrlst **lst, void *user,
		void (*d)(void *, void *));

/*
** arrlst_add: Adds a new element into the list.
**
** -e: the elements to be added, NULL is ignored.
** returns: 0 upon failure, 1 otherwise.
*/
int					arrlst_add(t_arrlst *lst, const void *e);

#endif
