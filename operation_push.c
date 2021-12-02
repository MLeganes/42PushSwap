/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 00:42:48 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/02 14:13:06 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void operation_push(t_stack *src, t_stack *dest)
{
	t_stack *tmp;
	
	// working in progress!!!
	
	// stack_remove_first or extract
	tmp = stack_remove_first(src);
	// stack_add_front
	stack_add_first(src, tmp);
			// 1. stack 1 elem
			// 2. stack 2 elems
			// 3. stack > 2 elems	
}

/**
 * @brief 	Push a- take the first element at the top of b and put it at the top of a.
 * 			Do nothing if b is empty.
 * 
 * @param ps Struct with stack a, b and more info. 
 */
void operation_pa(t_push_swap ps)
{
	
}

/**
 * @brief 	Push b- take the first element at the top of a and put it at the top of b.
 * 			 Do nothing if a is empty
 * 
 * @param ps Struct with stack a, b and more info. 
 */
void operation_pb(t_push_swap ps){}