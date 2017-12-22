/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec4.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 11:53:26 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 10:39:10 by yguaye           ###   ########.fr       */
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
t_vec4d				*new_vec4d(double x, double y, double z, double w);

void				del_vec4(t_vec4 **vec4);

t_vec4				*neg_vec4(const t_vec4 *vec);
t_vec4i				*neg_vec4i(const t_vec4i *vec);
t_vec4f				*neg_vec4f(const t_vec4f *vec);
t_vec4d				*neg_vec4d(const t_vec4d *vec);

t_vec4				*negf_vec4(t_vec4 **vec);

t_vec4				*add_vec4(const t_vec4 *lhs, const t_vec4 *rhs);
t_vec4i				*add_vec4i(const t_vec4i *lhs, const t_vec4i *rhs);
t_vec4f				*add_vec4f(const t_vec4f *lhs, const t_vec4f *rhs);
t_vec4d				*add_vec4d(const t_vec4d *lhs, const t_vec4d *rhs);

t_vec4				*addf_vec4(t_vec4 **lhs, t_vec4 **rhs);
t_vec4				*addf1_vec4(t_vec4 **lhs, const t_vec4 *rhs);
t_vec4				*addf2_vec4(const t_vec4 *lhs, t_vec4 **rhs);

t_vec4				*sub_vec4(const t_vec4 *lhs, const t_vec4 *rhs);
t_vec4i				*sub_vec4i(const t_vec4i *lhs, const t_vec4i *rhs);
t_vec4f				*sub_vec4f(const t_vec4f *lhs, const t_vec4f *rhs);
t_vec4d				*sub_vec4d(const t_vec4d *lhs, const t_vec4d *rhs);

t_vec4				*subf_vec4(t_vec4 **lhs, t_vec4 **rhs);
t_vec4				*subf1_vec4(t_vec4 **lhs, const t_vec4 *rhs);
t_vec4				*subf2_vec4(const t_vec4 *lhs, t_vec4 **rhs);

t_vec4				*mul_vec4(const t_vec4 *lhs, const void *rhs);
t_vec4i				*mul_vec4i(const t_vec4i *lhs, const int rhs);
t_vec4f				*mul_vec4f(const t_vec4f *lhs, const float rhs);
t_vec4d				*mul_vec4d(const t_vec4d *lhs, const double rhs);

t_vec4				*mulf_vec4(t_vec4 **lhs, void **rhs);
t_vec4				*mulf1_vec4(t_vec4 **lhs, const void *rhs);
t_vec4				*mulf2_vec4(const t_vec4 *lhs, void **rhs);

t_vec4				*div_vec4(const t_vec4 *lhs, const void *rhs);
t_vec4i				*div_vec4i(const t_vec4i *lhs, const int rhs);
t_vec4f				*div_vec4f(const t_vec4f *lhs, const float rhs);
t_vec4d				*div_vec4d(const t_vec4d *lhs, const double rhs);

t_vec4				*divf_vec4(t_vec4 **lhs, void **rhs);
t_vec4				*divf1_vec4(t_vec4 **lhs, const void *rhs);
t_vec4				*divf2_vec4(const t_vec4 *lhs, void **rhs);

t_vec4				*cross_vec4(const t_vec4 *lhs, const t_vec4 *rhs);
t_vec4i				*cross_vec4i(const t_vec4i *lhs, const t_vec4i *rhs);
t_vec4f				*cross_vec4f(const t_vec4f *lhs, const t_vec4f *rhs);
t_vec4d				*cross_vec4d(const t_vec4d *lhs, const t_vec4d *rhs);

t_vec4				*crossf_vec4(t_vec4 **lhs, t_vec4 **rhs);
t_vec4				*crossf1_vec4(t_vec4 **lhs, const t_vec4 *rhs);
t_vec4				*crossf2_vec4(const t_vec4 *lhs, t_vec4 **rhs);

t_vec4				*normalize_vec4(const t_vec4 *vec);
t_vec4i				*normalize_vec4i(const t_vec4i *vec);
t_vec4f				*normalize_vec4f(const t_vec4f *vec);
t_vec4d				*normalize_vec4d(const t_vec4d *vec);

t_vec4				*normalizef_vec4(t_vec4 **vec);

#endif
