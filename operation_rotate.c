/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 00:45:07 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/03 01:25:38 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief 		Rotate a- shift up all elements of stack a by 1.
 * 				The first element becomes the last one.
 * 
 * @param ps 
 */
void	operation_ra(t_push_swap *ps)
{
	if (ps->size_a > 1 && ps->stack_a)
	{
		ps->stack_a = ps->stack_a->next;
		print_operation("ra");
	}	
}

/**
 * @brief 		Rotate b- shift up all elements of stack b by 1.
 * 				The first element becomes the last one.
 * 
 * @param ps 
 */
void	operation_rb(t_push_swap *ps)
{
	if (ps->size_b > 1 && ps->stack_b)
	{
		ps->stack_b = ps->stack_b->next;
		print_operation("rb");
	}
}

/**
 * @brief 		ra and rb at the same time.
 * 
 * @param ps 
 */
void	operation_rr(t_push_swap *ps)
{
	if (ps->size_a > 1 && ps->stack_a)
		ps->stack_a = ps->stack_a->next;
	if (ps->size_b > 1 && ps->stack_b)
		ps->stack_b = ps->stack_b->next;
	print_operation("rr");
}
