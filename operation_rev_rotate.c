/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rev_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 01:18:35 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/22 12:26:28 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief 		Reverse rotate a- shift down all elements of stack a by 1.
 * 				The last element becomes the first one. 
 * 
 * @param ps 
 */
void	operation_rra(t_push_swap *ps)
{
	if (ps->stack_a && ps->size_a > 1)
	{
		ps->stack_a = ps->stack_a->prev;
		print_operation("rra");
	}	
}

/**
 * @brief 		Reverse rotate b- shift down all elements of stack b by 1.
 * 				The last element becomes the first one.
 * 
 * @param ps 
 */
void	operation_rrb(t_push_swap *ps)
{
	if (ps->stack_b && ps->size_b > 1)
	{
		ps->stack_b = ps->stack_b->prev;
		print_operation("rrb");
	}
}

/**
 * @brief 		rra and rrb at the same time.
 * 
 * @param ps 
 */
void	operation_rrr(t_push_swap *ps)
{
	if (ps->stack_a && ps->size_a > 2)
		ps->stack_a = ps->stack_a->prev;
	if (ps->stack_b && ps->size_b > 2)
		ps->stack_b = ps->stack_b->prev;
	print_operation("rrr");
}
