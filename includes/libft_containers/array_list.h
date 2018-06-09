/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array_list.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 13:52:27 by yguaye            #+#    #+#             */
/*   Updated: 2018/06/09 14:10:06 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_LIST_H
# define ARRAY_LIST_H

# include <stdlib.h>

# define ARRLST_DEFAULT_SIZE 16

typedef struct		s_arrlst
{
	size_t			size;
	size_t			capacity;
	void			**elements;
}					t_arrlst;

t_arrlst			*arrlst_new(size_t start_capacity);

int					arrlst_reserve(t_arrlst *lst, size_t new_capacity);

void				arrlst_del(t_arrlst **lst, void (*d)(void *));

int					arrlst_add(t_arrlst *lst, void *e);

int					arrlst_add_cpy(t_arrlst *lst, const void *e, size_t size);

#endif
