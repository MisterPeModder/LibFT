/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opf2_vecnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 15:04:01 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 15:04:58 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_base/memory.h"
#include "libft_math/vectype.h"

void				*addf2_vecnum(t_vectype type, void *lhs, void **rhs)
{
	void			*res;

	res = add_vecnum(type, lhs, *rhs);
	ft_memdel(rhs);
	return (res);
}

void				*subf2_vecnum(t_vectype type, void *lhs, void **rhs)
{
	void			*res;

	res = sub_vecnum(type, lhs, *rhs);
	ft_memdel(rhs);
	return (res);
}

void				*mulf2_vecnum(t_vectype type, void *lhs, void **rhs)
{
	void			*res;

	res = mul_vecnum(type, lhs, *rhs);
	ft_memdel(rhs);
	return (res);
}

void				*divf2_vecnum(t_vectype type, void *lhs, void **rhs)
{
	void			*res;

	res = div_vecnum(type, lhs, *rhs);
	ft_memdel(rhs);
	return (res);
}
