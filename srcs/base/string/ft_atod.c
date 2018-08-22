/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atod.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 05:07:27 by yguaye            #+#    #+#             */
/*   Updated: 2018/08/21 19:34:41 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_base/stringft.h"
#include "libft_base/character.h"

static int			ft_atod_validate(const char *str, int *negate)
{
	if (!str || !*str)
		return (0);
	while (ft_isspace((int)*str))
		++str;
	if (*str == '-' || *str == '+')
	{
		*negate = *str == '-';
		++str;
	}
	if (!*str)
		return (0);
	while (ft_isdigit(*str))
		++str;
	if (!*str)
		return (1);
	else if (*str == '.' && !ft_isdigit(*(++str)))
		return (0);
	return (1);
}

double				ft_atod(const char *str)
{
	double			num;
	double			decimal_part;
	int				negate;

	negate = 0;
	if (!ft_atod_validate(str, &negate))
		return (0);
	if ((num = (double)ft_atol(str)) < 0)
		num = -num;
	while (*str && *str != '.')
		++str;
	if (*(str++) == '.')
	{
		decimal_part = (double)ft_atol(str);
		while (decimal_part >= 1.)
			decimal_part /= 10;
		while (*(str++) == '0')
			decimal_part /= 10;
		num += decimal_part;
	}
	return (negate ? -num : num);
}

int					ft_strisdouble(const char *str)
{
	int				tmp;

	return (ft_atod_validate(str, &tmp));
}
