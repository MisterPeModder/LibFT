/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_vecnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 08:24:28 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 09:54:28 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_base/memory.h"
#include "libft_math/vectype.h"

static inline void	*add_vecint(void *lhs, void *rhs)
{
	int				res;

	res =*(int *)lhs + *(int *)rhs;
	return (ft_memdup(&res, sizeof(int)));
}

static inline void	*add_vecfloat(void *lhs, void *rhs)
{
	float			res;

	res =*(float *)lhs + *(float *)rhs;
	return (ft_memdup(&res, sizeof(float)));
}

static inline void	*add_vecdouble(void *lhs, void *rhs)
{
	double			res;

	res =*(double *)lhs + *(double *)rhs;
	return (ft_memdup(&res, sizeof(double)));
}

void				*add_vecnum(t_vectype type, void *lhs, void *rhs)
{
	if (type == VEC_I)
		return (add_vecint(lhs, rhs));
	else if (type == VEC_F)
		return (add_vecfloat(lhs, rhs));
	else if (type == VEC_D)
		return (add_vecdouble(lhs, rhs));
	return (NULL);
}
