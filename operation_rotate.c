/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rotate.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 00:45:07 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/02 03:52:54 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_ra(t_push_swap *ps)
{
	if (ps->size_a > 1 && ps->stack_a)
	{
		ft_printf("\n 1 element before: %d\n", ps->stack_a->nbr);
		ps->stack_a = ps->stack_a->next;
		ft_printf("\n 1 element after: %d\n", ps->stack_a->nbr);
		print_operation("ra");	
	}	
}

void	operation_rb(t_push_swap *ps)
{
	if (ps->size_b > 1 && ps->stack_b)
	{
		ps->stack_b = ps->stack_b->next;
		print_operation("rb");
	}
}

void	operation_rr(t_push_swap *ps)
{
	if (ps->size_a > 1 && ps->stack_a)
		ps->stack_a = ps->stack_a->next;	
	if (ps->size_b > 1 && ps->stack_b)
		ps->stack_b = ps->stack_b->next;
	print_operation("rr");
}
