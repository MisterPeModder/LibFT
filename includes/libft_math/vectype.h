/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vectype.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/21 10:46:04 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 08:43:40 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTYPE_H
# define VECTYPE_H

typedef enum		e_vectype
{
	VEC_I,
	VEC_F,
	VEC_D,
}					t_vectype;

void				*add_vecnum(t_vectype type, void *lhs, void *rhs);
void				*sub_vecnum(t_vectype type, void *lhs, void *rhs);
void				*mul_vecnum(t_vectype type, void *lhs, void *rhs);
void				*div_vecnum(t_vectype type, void *lhs, void *rhs);

#endif
