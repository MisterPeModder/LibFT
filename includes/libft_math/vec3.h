/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec3.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 11:51:05 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/21 13:43:39 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VEC3_H
# define VEC3_H

# include <stdlib.h>
# include "vectype.h"

typedef struct		s_vec3i
{
	t_vectype		type;
	int				*x;
	int				*y;
	int				*z;
}					t_vec3i;

typedef struct		s_vec3f
{
	t_vectype		type;
	float			*x;
	float			*y;
	float			*z;
}					t_vec3f;

typedef struct		s_vec3d
{
	t_vectype		type;
	double			*x;
	double			*y;
	double			*z;
}					t_vec3d;

typedef struct		s_vec3x
{
	t_vectype		type;
	void			*x;
	void			*y;
	void			*z;
}					t_vec3x;

typedef union		u_vec3
{
	t_vec3i			vec3i;
	t_vec3f			vec3f;
	t_vec3d			vec3d;
	t_vec3x			vec3x;
}					t_vec3;

t_vec3				*new_vec3(t_vectype type, const void **xyz, size_t size);
t_vec3i				*new_vec3i(int x, int y, int z);
t_vec3f				*new_vec3f(float x, float y, float z);
t_vec3d				*new_vec3d(double x, double y, double z);

void				del_vec3(void **vec3);

#endif
