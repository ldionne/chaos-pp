# /* *************************************************************************
#  *                                                                         *
#  *    (C) Copyright Paul Mensonides 2003.                                  *
#  *                                                                         *
#  *    Use, modification, and distribution are subject to Version 1.0 of    *
#  *    the Boost Software License.  (See accompanying file LICENSE.)        *
#  *                                                                         *
#  *    See http://chaos-pp.sourceforge.net for most recent version.         *
#  *                                                                         *
#  ************************************************************************* */
#
# ifndef CHAOS_PREPROCESSOR_LAMBDA_PLANAR_H
# define CHAOS_PREPROCESSOR_LAMBDA_PLANAR_H
#
# include <chaos/preprocessor/cat.h>
# include <chaos/preprocessor/config.h>
# include <chaos/preprocessor/detection/is_variadic.h>
# include <chaos/preprocessor/lambda/invoke.h>
# include <chaos/preprocessor/lambda/ops.h>
# include <chaos/preprocessor/recursion/basic.h>
# include <chaos/preprocessor/recursion/expr.h>
#
# /* CHAOS_PP_PLANAR */
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_PLANAR(x) CHAOS_PP_CAT(CHAOS_IP_PLANAR_, CHAOS_PP_IS_VARIADIC(x))
#    define CHAOS_PP_PLANAR_ CHAOS_PP_LAMBDA(CHAOS_PP_PLANAR)
#    define CHAOS_IP_PLANAR_1() CHAOS_IP_PLANAR_11
#    define CHAOS_IP_PLANAR_11(o, expr) CHAOS_IP_PLANAR_111(CHAOS_PP_DEFER(CHAOS_PP_OBSTRUCT)(), o, CHAOS_PP_NEXT(o), expr)
#    define CHAOS_IP_PLANAR_111(_, o1, o2, expr) \
        CHAOS_PP_EXPR_S _(o2)(CHAOS_PP_EXPR_S _(o1)(CHAOS_PP_INVOKE_S _(o1, expr, \
        /**/
# else
#    define CHAOS_PP_PLANAR(x) CHAOS_IP_PLANAR_0
# endif
#
# define CHAOS_PP_PLANAR_ID() CHAOS_PP_PLANAR
#
# define CHAOS_IP_PLANAR_0() CHAOS_IP_PLANAR_00
# define CHAOS_IP_PLANAR_00(o, macro) CHAOS_IP_PLANAR_000(CHAOS_PP_DEFER(CHAOS_PP_OBSTRUCT)(), o, CHAOS_PP_NEXT(o), macro)
# define CHAOS_IP_PLANAR_000(_, o1, o2, macro) \
    CHAOS_PP_EXPR_S _(o2)(CHAOS_PP_EXPR_S _(o1)(macro CHAOS_PP_DEFER(CHAOS_PP_OBSTRUCT)()(o2, \
    /**/
#
# /* CHAOS_PP_PLANAR_CLOSE */
#
# define CHAOS_PP_PLANAR_CLOSE() )))
# define CHAOS_PP_PLANAR_CLOSE_ID() CHAOS_PP_PLANAR_CLOSE
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_PLANAR_CLOSE_ CHAOS_PP_LAMBDA(CHAOS_PP_PLANAR_CLOSE)
# endif
#
# endif