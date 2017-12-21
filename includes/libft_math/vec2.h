/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec2.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 10:30:22 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/21 11:02:38 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC2_H
# define VEC2_H

# include "vectype.h"

typedef struct		s_vec2i
{
	t_vectype		type;
	int				*x;
	int				*y;
	int				*z;
}					t_vec2i;

typedef struct		s_vec2f
{
	t_vectype		type;
	float			*x;
	float			*y;
	float			*z;
}					t_vec2f;

typedef struct		s_vec2d
{
	t_vectype		type;
	double			*x;
	double			*y;
	double			*z;
}					t_vec2d;

typedef union		u_vec2
{
	t_vec2f			vec2i;
	t_vec2f			vec2f;
	t_vec2f			vec2d;
}					t_vec2;

t_vec2				*new_vec2(t_vectype type, void *x, void *y, void *z);
t_vec2f				*new_vec2i(float x, float y, float z);
t_vec2f				*new_vec2f(float x, float y, float z);
t_vec2f				*new_vec2d(float x, float y, float z);

void				*del_vec2(void *vec2);

#endif
