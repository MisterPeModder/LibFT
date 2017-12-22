/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   div_vecnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 08:24:28 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 08:45:47 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_base/memory.h"
#include "libft_math/vectype.h"

static inline void	*div_vecint(void *lhs, void *rhs)
{
	int				res;

	res =*(int *)lhs / *(int *)rhs;
	return (ft_memdup(&res, sizeof(int)));
}

static inline void	*div_vecfloat(void *lhs, void *rhs)
{
	float			res;

	res =*(float *)lhs / *(float *)rhs;
	return (ft_memdup(&res, sizeof(float)));
}

static inline void	*div_vecdouble(void *lhs, void *rhs)
{
	double			res;

	res =*(double *)lhs / *(double *)rhs;
	return (ft_memdup(&res, sizeof(double)));
}

void				*div_vecnum(t_vectype type, void *lhs, void *rhs)
{
	if (type == VEC_I)
		return (div_vecint(lhs, rhs));
	else if (type == VEC_F)
		return (div_vecfloat(lhs, rhs));
	else if (type == VEC_D)
		return (div_vecdouble(lhs, rhs));
	return (NULL);
}
