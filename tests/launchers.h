/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launchers.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 18:06:15 by yguaye            #+#    #+#             */
/*   Updated: 2018/06/11 13:49:02 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LAUNCHERS_H
# define LAUNCHERS_H

extern void			add_unit_test(void **lst, const char *name, int (*t)(void));

void				*launcher_basic(void);
void				*launcher_libft_string(void);

#endif
