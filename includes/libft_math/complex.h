/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 13:25:56 by yguaye            #+#    #+#             */
/*   Updated: 2018/01/17 13:54:06 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPLEX_H
# define COMPLEX_H

typedef struct		s_cpx
{
	double			re;
	double			im;
}					t_cpx;

t_cpx				*new_cpx(double real_part, double imaginary_part);

t_cpx				*add_cpx(t_cpx *lhs, t_cpx *rhs);

t_cpx				*conjugate_cpx(t_cpx *op);

t_cpx				*div_cpx(t_cpx *lhs, t_cpx *rhs);

double				modulus_cpx(t_cpx *op);

t_cpx				*mul_cpx(t_cpx *lhs, t_cpx *rhs);

t_cpx				*sub_cpx(t_cpx *lhs, t_cpx *rhs);

#endif
