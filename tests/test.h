/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 18:09:53 by yguaye            #+#    #+#             */
/*   Updated: 2018/06/09 19:44:56 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

typedef struct		s_utest
{
	char			*name;
	int				(*test)(void);
	struct s_utest	*next;
}					t_utest;

struct				s_launcher
{
	const char		*name;
	void			*(*f)(void);
};

void				add_unit_test(void **lst, const char *name,
		int (*test)(void));

void				del_unit_tests(t_utest **lst);

int					load_tests(const char *name, t_utest **test_loc);

#endif
