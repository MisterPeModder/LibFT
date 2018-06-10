/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 18:09:53 by yguaye            #+#    #+#             */
/*   Updated: 2018/06/10 19:30:51 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

# include <unistd.h>

typedef struct		s_utest
{
	char			*name;
	int				(*test)(void);
	struct s_utest	*next;
	pid_t			pid;
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

int					launch_child(t_utest *unit);

int					wait_for_child(pid_t pid, int *status);

# ifdef NO_COLORS
#  define RESET ""
#  define BOLD ""
#  define RED ""
#  define GREEN ""
#  define YELLOW ""
#  define BLUE ""
#  define MAGENTA ""
# else
#  define RESET "\033[0m"
#  define BOLD "\033[1m"
#  define RED "\033[31m"
#  define GREEN "\033[32m"
#  define YELLOW "\033[33m"
#  define BLUE "\033[34m"
#  define MAGENTA "\033[35m"
# endif

# define TIMEOUT_DELAY 5

#endif
