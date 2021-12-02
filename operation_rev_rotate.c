/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_rev_rotate.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 01:18:35 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/02 01:33:15 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operation_rra(t_push_swap *ps)
{
	if (ps->stack_a && ps->size_a > 2)
	{
		ft_printf("\n 1 element before: %d\n", ps->stack_a->nbr);
		ps->stack_a = ps->stack_a->prev;
		ft_printf("\n 1 element after: %d\n", ps->stack_a->nbr);
		print_operation("rra");			
	}	
}

void	operation_rrb(t_push_swap *ps)
{
	if (ps->stack_b && ps->size_b > 2)
	{
		ft_printf("\n 1 element before: %d\n", ps->stack_b->nbr);
		ps->stack_b = ps->stack_b->prev;
		ft_printf("\n 1 element after: %d\n", ps->stack_b->nbr);
		print_operation("rrb");	
	}
}

void	operation_rrr(t_push_swap *ps)
{
	if (ps->stack_a && ps->size_a > 2)
	{
		ft_printf("\n 1 element before: %d\n", ps->stack_a->nbr);
		ps->stack_a = ps->stack_a->prev;
		ft_printf("\n 1 element after: %d\n", ps->stack_a->nbr);	
	}
	if (ps->stack_b && ps->size_b > 2)
	{
		ft_printf("\n 1 element before: %d\n", ps->stack_b->nbr);
		ps->stack_b = ps->stack_b->prev;
		ft_printf("\n 1 element after: %d\n", ps->stack_b->nbr);
	}
	print_operation("rrr");	
}
