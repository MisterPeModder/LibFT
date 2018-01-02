/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sqrt_vecnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 16:19:57 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 16:34:43 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include "libft_base/memory.h"
#include "libft_math/vectype.h"

static inline void	*sqrt_vecint(const void *num)
{
	int				res;

	res = (int)sqrt((double)*(int *)num);
	return (ft_memdup(&res, sizeof(int)));
}

static inline void	*sqrt_vecfloat(const void *num)
{
	int				res;

	res = (float)sqrt((double)*(float *)num);
	return (ft_memdup(&res, sizeof(float)));
}

static inline void	*sqrt_vecdouble(const void *num)
{
	int				res;

	res = sqrt(*(double *)num);
	return (ft_memdup(&res, sizeof(double)));
}

void				*sqrt_vecnum(t_vectype type, const void *num)
{
	if (type == VEC_I)
		return (sqrt_vecint(num));
	else if (type == VEC_F)
		return (sqrt_vecfloat(num));
	else if (type == VEC_D)
		return (sqrt_vecdouble(num));
	return (NULL);
}
