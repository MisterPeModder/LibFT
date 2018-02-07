/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   debug.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yguaye <yguaye@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/07 10:55:32 by yguaye            #+#    #+#             */
/*   Updated: 2018/02/07 15:21:20 by yguaye           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEBUG_H
# define DEBUG_H
# if defined DEBUG && DEBUG != 0

#  include <stdio.h>

#  define DB_IF __FILE__ , __func__ , __LINE__
#  define DB_VA __VA_ARGS__

#  define TRACE(N) (printf("## %s (%s:%s@%d)\n", N, DB_IF) * 0)
#  define TRACEN(N) (printf("## %s (%s:%s@%d)", N, DB_IF) * 0)

#  define TRACE_CLL(N, ...) (TRACE(#N"("#__VA_ARGS__")") + N(__VA_ARGS__))
#  define TRACE_VAL(N, F, X) (X + TRACEN(N) + printf(" ## value="F"\n", X) * 0)

#  define TRACE_INT(NAME, X) TRACE_VAL(NAME, "%d", X)
#  define TRACE_UIN(NAME, X) TRACE_VAL(NAME, "%u", X)
#  define TRACE_LNG(NAME, X) TRACE_VAL(NAME, "%ld", X)
#  define TRACE_ULN(NAME, X) TRACE_VAL(NAME, "%lu", X)
#  define TRACE_DBL(NAME, X) TRACE_VAL(NAME, "%f", X)
#  define TRACE_SZT(NAME, X) TRACE_VAL(NAME, "%zu", X)

#  define TRACE_INT2(X) TRACE_VAL("\b", "%d", X)
#  define TRACE_UIN2(X) TRACE_VAL("\b", "%u", X)
#  define TRACE_LNG2(X) TRACE_VAL("\b", "%ld", X)
#  define TRACE_ULN2(X) TRACE_VAL("\b", "%lu", X)
#  define TRACE_DBL2(X) TRACE_VAL("\b", "%f", X)
#  define TRACE_SZT2(X) TRACE_VAL("\b", "%zu", X)

# else

#  define TRACE(N) 0

#  define TRACE_CLL(NAME, ...) NAME(__VA_ARGS__)

#  define TRACE_INT(NAME, X) X
#  define TRACE_UIN(NAME, X) X
#  define TRACE_LNG(NAME, X) X
#  define TRACE_ULN(NAME, X) X
#  define TRACE_DBL(NAME, X) X
#  define TRACE_SZT(NAME, X) X
#  define TRACE_STR(NAME, X) X

#  define TRACE_INT2(X) X
#  define TRACE_UIN2(X) X
#  define TRACE_LNG2(X) X
#  define TRACE_ULN2(X) X
#  define TRACE_DBL2(X) X
#  define TRACE_SZT2(X) X
#  define TRACE_STR2(X) X

# endif
#endif
