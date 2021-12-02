/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:51:23 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/02 00:42:16 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void operation_swap(t_stack *stk)
{
	int tmp;

	if ( stk != NULL && stk->next != NULL)
	{		
		tmp = stk->nbr;
		stk->nbr = stk->next->nbr;
		stk->next->nbr = tmp;
		print_debugger("operation swap");
	}
}

void operation_sa(t_push_swap *ps)
{
	if (ps->size_a > 1)
	{		
		operation_swap(ps->stack_a);
		ft_printf("\n element: %d\n", ps->stack_a->nbr);
		ft_printf("\n element: %d\n", ps->stack_a->next->nbr);
	}
	print_operation("sa");
}

void operation_sb(t_push_swap *ps)
{
	if (ps->size_b > 1)
		operation_swap(ps->stack_b);
	print_operation("sb");
}

void operation_ss(t_push_swap *ps)
{
	operation_swap(ps->stack_a);
	operation_swap(ps->stack_b);
	print_operation("ss");	
}
