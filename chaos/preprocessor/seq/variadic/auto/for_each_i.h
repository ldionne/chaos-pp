# /* ********************************************************************
#  *                                                                    *
#  *    (C) Copyright Paul Mensonides 2003-2005.                        *
#  *                                                                    *
#  *    Distributed under the Boost Software License, Version 1.0.      *
#  *    (See accompanying file LICENSE).                                *
#  *                                                                    *
#  *    See http://chaos-pp.sourceforge.net for most recent version.    *
#  *                                                                    *
#  ******************************************************************** */
#
# ifndef CHAOS_PREPROCESSOR_SEQ_VARIADIC_AUTO_FOR_EACH_I_H
# define CHAOS_PREPROCESSOR_SEQ_VARIADIC_AUTO_FOR_EACH_I_H
#
# include <chaos/preprocessor/cat.h>
# include <chaos/preprocessor/config.h>
# include <chaos/preprocessor/lambda/ops.h>
# include <chaos/preprocessor/recursion/expr.h>
# include <chaos/preprocessor/recursion/higher_order.h>
# include <chaos/preprocessor/seq/variadic/for_each_i.h>
#
# /* CHAOS_PP_VARIADIC_SEQ_AUTO_FOR_EACH_I */
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_PP_VARIADIC_SEQ_AUTO_FOR_EACH_I CHAOS_PP_CAT(CHAOS_IP_VARIADIC_SEQ_AUTO_FOR_EACH_I_, CHAOS_PP_HIGHER_ORDER())
#    define CHAOS_PP_VARIADIC_SEQ_AUTO_FOR_EACH_I_ID() CHAOS_PP_VARIADIC_SEQ_AUTO_FOR_EACH_I
#    define CHAOS_PP_VARIADIC_SEQ_AUTO_FOR_EACH_I_ CHAOS_PP_LAMBDA(CHAOS_PP_VARIADIC_SEQ_AUTO_FOR_EACH_I_ID)()
# endif
#
# if CHAOS_PP_VARIADICS
#    define CHAOS_IP_VARIADIC_SEQ_AUTO_FOR_EACH_I_1(...) CHAOS_PP_HIGHER_ORDER(1)(, CHAOS_PP_EXPR(CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I(__VA_ARGS__)))
#    define CHAOS_IP_VARIADIC_SEQ_AUTO_FOR_EACH_I_2(...) CHAOS_PP_HIGHER_ORDER(2)(, CHAOS_PP_EXPR(CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I(__VA_ARGS__)))
#    define CHAOS_IP_VARIADIC_SEQ_AUTO_FOR_EACH_I_3(...) CHAOS_PP_HIGHER_ORDER(3)(, CHAOS_PP_EXPR(CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I(__VA_ARGS__)))
#    define CHAOS_IP_VARIADIC_SEQ_AUTO_FOR_EACH_I_4(...) CHAOS_PP_HIGHER_ORDER(4)(, CHAOS_PP_EXPR(CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I(__VA_ARGS__)))
#    define CHAOS_IP_VARIADIC_SEQ_AUTO_FOR_EACH_I_5(...) CHAOS_PP_HIGHER_ORDER(5)(, CHAOS_PP_EXPR(CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I(__VA_ARGS__)))
#    define CHAOS_IP_VARIADIC_SEQ_AUTO_FOR_EACH_I_6(...) CHAOS_PP_HIGHER_ORDER(6)(, CHAOS_PP_EXPR(CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I(__VA_ARGS__)))
#    define CHAOS_IP_VARIADIC_SEQ_AUTO_FOR_EACH_I_7(...) CHAOS_PP_HIGHER_ORDER(7)(, CHAOS_PP_EXPR(CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I(__VA_ARGS__)))
#    define CHAOS_IP_VARIADIC_SEQ_AUTO_FOR_EACH_I_8(...) CHAOS_PP_HIGHER_ORDER(8)(, CHAOS_PP_EXPR(CHAOS_PP_VARIADIC_SEQ_FOR_EACH_I(__VA_ARGS__)))
# endif
#
# endif
