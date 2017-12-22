/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mul_vecnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 08:24:28 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 08:45:11 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_base/memory.h"
#include "libft_math/vectype.h"

static inline void	*mul_vecint(void *lhs, void *rhs)
{
	int				res;

	res =*(int *)lhs * *(int *)rhs;
	return (ft_memdup(&res, sizeof(int)));
}

static inline void	*mul_vecfloat(void *lhs, void *rhs)
{
	float			res;

	res =*(float *)lhs * *(float *)rhs;
	return (ft_memdup(&res, sizeof(float)));
}

static inline void	*mul_vecdouble(void *lhs, void *rhs)
{
	double			res;

	res =*(double *)lhs * *(double *)rhs;
	return (ft_memdup(&res, sizeof(double)));
}

void				*mul_vecnum(t_vectype type, void *lhs, void *rhs)
{
	if (type == VEC_I)
		return (mul_vecint(lhs, rhs));
	else if (type == VEC_F)
		return (mul_vecfloat(lhs, rhs));
	else if (type == VEC_D)
		return (mul_vecdouble(lhs, rhs));
	return (NULL);
}
