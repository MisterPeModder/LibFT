/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opf1_vecnum.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/22 15:03:13 by yguaye            #+#    #+#             */
/*   Updated: 2017/12/22 15:03:52 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_base/memory.h"
#include "libft_math/vectype.h"

void				*addf1_vecnum(t_vectype type, void **lhs, void *rhs)
{
	void			*res;

	res = add_vecnum(type, *lhs, rhs);
	ft_memdel(lhs);
	return (res);
}

void				*subf1_vecnum(t_vectype type, void **lhs, void *rhs)
{
	void			*res;

	res = sub_vecnum(type, *lhs, rhs);
	ft_memdel(lhs);
	return (res);
}

void				*mulf1_vecnum(t_vectype type, void **lhs, void *rhs)
{
	void			*res;

	res = mul_vecnum(type, *lhs, rhs);
	ft_memdel(lhs);
	return (res);
}

void				*divf1_vecnum(t_vectype type, void **lhs, void *rhs)
{
	void			*res;

	res = div_vecnum(type, *lhs, rhs);
	ft_memdel(lhs);
	return (res);
}
