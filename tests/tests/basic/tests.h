/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 19:52:30 by yguaye            #+#    #+#             */
/*   Updated: 2018/06/10 17:39:35 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TESTS_H
# define TESTS_H

int					always_ok(void);
int					always_ko(void);
int					always_segv(void);
int					always_sigabort(void);
int					infinite_loop(void);

#endif
