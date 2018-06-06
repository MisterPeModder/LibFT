/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slist.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 08:22:52 by yguaye            #+#    #+#             */
/*   Updated: 2018/06/06 10:04:56 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SLIST_H
# define SLIST_H

# include <stdlib.h>

typedef struct		s_slist
{
	struct s_slist	*prev;
	struct s_slist	*next;
}					t_slist;

/*
** slst_new: Creates a new t_slist structure.
**
** -size: must be greater or equal to sizeof(t_slist)
**
** returns: NULL if invalid size or memory error,
**          the allocated memory otherwise.
*/
void				*slst_new(size_t size);

/*
** slst_add: Adds link to the the passed list.
**
** -beg: a VALID pointer to a t_slist structure.
**       Its dereferenced value may be NULL
** -nlst: the new link, must be a valid pointer to a t_slist structure.
**        May be NULL.
*/
void				slst_add(t_slist **beg, void *nlst);

/*
** slst_addnew: Creates and adds a link to the passed list.
**
** -beg: a VALID pointer to a t_slist structure.
**       Its dereferenced value may be NULL
** -size: the new link's size. Must be greater or equal to sizeof(t_slist)
**
** returns: the new link.
*/
void				*slst_addnew(t_slist **beg, size_t size);

/*
** slst_release: Frees the passed list.
**
** -lst: a VALID pointer to a t_slist structure.
** -d: the destructor function. May be NULL.
*/
void				slst_release(t_slist **lst, void (*d)(void *));

/*
** slist_len: Returns the length of the passed list.
*/
size_t				slst_len(const void *lst);

/*
** slst_iter: Iterates through the passed list.
**
** -lst: a VALID pointer to a t_slist structure.
** -user: data that will be passed to the 'i' function. May have any value.
** -i: the iteration function. It will be called for each member of the list.
**     Its first parameter is a pointer to the link, and its second one
**     is the user data.
*/
int					slst_iter(void *lst, void *user, int (*i)(void *, void *));

#endif
