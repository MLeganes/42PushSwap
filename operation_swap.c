/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:51:23 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/03 01:44:30 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	operation_swap(t_stack *stk)
{
	int	tmp;

	if (stk != NULL && stk->next != NULL)
	{		
		tmp = stk->nbr;
		stk->nbr = stk->next->nbr;
		stk->next->nbr = tmp;
	}
}

/**
 * @brief 		Swap a- swap the first 2 elements at the top of stack a.
 *				Do nothing if there is only one or no elements.
 * 
 * @param ps 
 */
void	operation_sa(t_push_swap *ps)
{
	if (ps->size_a > 1)
		operation_swap(ps->stack_a);
	print_operation("sa");
}

/**
 * @brief 		Swap b- swap the first 2 elements at the top of stack b.
 * 				Do nothing if thereis only one or no elements.
 * 
 * @param ps 
 */
void	operation_sb(t_push_swap *ps)
{
	if (ps->size_b > 1)
		operation_swap(ps->stack_b);
	print_operation("sb");
}

/**
 * @brief 		sa and sb at the same time.
 * 
 * @param ps 
 */
void	operation_ss(t_push_swap *ps)
{
	operation_swap(ps->stack_a);
	operation_swap(ps->stack_b);
	print_operation("ss");
}
