/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 11:53:26 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/21 13:43:45 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC4_H
# define VEC4_H

# include <stdlib.h>
# include "vectype.h"

typedef struct		s_vec4i
{
	t_vectype		type;
	int				*x;
	int				*y;
	int				*z;
	int				*w;
}					t_vec4i;

typedef struct		s_vec4f
{
	t_vectype		type;
	float			*x;
	float			*y;
	float			*z;
	float			*w;
}					t_vec4f;

typedef struct		s_vec4d
{
	t_vectype		type;
	double			*x;
	double			*y;
	double			*z;
	double			*w;
}					t_vec4d;

typedef struct		s_vec4x
{
	t_vectype		type;
	void			*x;
	void			*y;
	void			*z;
	void			*w;
}					t_vec4x;

typedef union		u_vec4
{
	t_vec4i			vec4i;
	t_vec4f			vec4f;
	t_vec4d			vec4d;
	t_vec4x			vec4x;
}					t_vec4;

t_vec4				*new_vec4(t_vectype type, const void **xyzw, size_t size);
t_vec4i				*new_vec4i(int x, int y, int z, int w);
t_vec4f				*new_vec4f(float x, float y, float z, float w);
t_vec4d				*new_vec4d(double x, double y, double z, float w);

void				del_vec4(void **vec4);

#endif
