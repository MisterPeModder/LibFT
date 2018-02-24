/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 17:31:11 by yguaye            #+#    #+#             */
/*   Updated: 2018/02/24 14:12:11 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft_base/stringft.h"
#include "libft_args/args.h"

int					set_arg_error(t_args *args, t_arg_error errcode,
		const char *detail)
{
	if (args)
	{
		arg_release(&args->errinfo);
		if (detail && !(args->errinfo = ft_strdup(detail)))
			args->errcode = ARG_MEM_ERROR;
		args->errcode = errcode;
	}
	return (errcode == ARG_VALID ? 0 : -1);
}

int					has_arg_errors(const t_args *args, int mask)
{
	return (!args || (args->errcode & mask) != ARG_VALID);
}

int					clear_arg_errors(t_args *args)
{
	return (set_arg_error(args, ARG_VALID, NULL));
}
