# /* *************************************************************************
#  *                                                                         *
#  *    (C) Copyright Paul Mensonides 2004.                                  *
#  *                                                                         *
#  *    Use, modification, and distribution are subject to Version 1.0 of    *
#  *    the Boost Software License.  (See accompanying file LICENSE.)        *
#  *                                                                         *
#  *    See http://chaos-pp.sourceforge.net for most recent version.         *
#  *                                                                         *
#  ************************************************************************* */
#
# ifndef CHAOS_PREPROCESSOR_REPETITION_PARAMETRIC_ENUM_SHIFTED_H
# define CHAOS_PREPROCESSOR_REPETITION_PARAMETRIC_ENUM_SHIFTED_H
#
# include <chaos/preprocessor/config.h>
# include <chaos/preprocessor/lambda/ops.h>
# include <chaos/preprocessor/punctuation/comma.h>
# include <chaos/preprocessor/repetition/parametric/delineate_shifted.h>
# include <chaos/preprocessor/recursion/expr.h>
#
# /* CHAOS_PP_ENUM_SHIFTED_PARAMETRIC */
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_ENUM_SHIFTED_PARAMETRIC(size, count, ...) CHAOS_PP_ENUM_SHIFTED_PARAMETRIC_S(CHAOS_PP_STATE(), size, count, __VA_ARGS__)
#    define CHAOS_PP_ENUM_SHIFTED_PARAMETRIC_ID() CHAOS_PP_ENUM_SHIFTED_PARAMETRIC
#    define CHAOS_PP_ENUM_SHIFTED_PARAMETRIC_ CHAOS_PP_LAMBDA(CHAOS_PP_ENUM_SHIFTED_PARAMETRIC_ID)()
# endif
#
# /* CHAOS_PP_ENUM_SHIFTED_PARAMETRIC_S */
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_ENUM_SHIFTED_PARAMETRIC_S(s, size, count, ...) CHAOS_PP_DELINEATE_SHIFTED_PARAMETRIC_S(s, size, count, CHAOS_PP_COMMA, __VA_ARGS__)
#    define CHAOS_PP_ENUM_SHIFTED_PARAMETRIC_S_ID() CHAOS_PP_ENUM_SHIFTED_PARAMETRIC_S
#    define CHAOS_PP_ENUM_SHIFTED_PARAMETRIC_S_ CHAOS_PP_LAMBDA(CHAOS_PP_ENUM_SHIFTED_PARAMETRIC_S_ID)()
# endif
#
# endif
