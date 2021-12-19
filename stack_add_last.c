/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add_last.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:08:16 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/19 22:34:57 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief 			Add new "new" at the end of the STACK_A.
 * 
 * @param ps 		Push_swap struct has access to stack_a.
 * @param new 	New element to insert at the end of the Stack.
 */
void	stack_a_add_last(t_push_swap *ps, t_stack *new)
{
	if (!new)
		error_print_exit();
	if (ps->stack_a == NULL)
	{
		ps->stack_a = new;
		new->next = new;
		new->prev = new;
	}
	else if (ps->stack_a == ps->stack_a->next)
	{
		ps->stack_a->next = new;
		ps->stack_a->prev = new;
		new->next = ps->stack_a;
		new->prev = ps->stack_a;
	}
	else
	{
		new->next = ps->stack_a;
		new->prev = ps->stack_a->prev;
		ps->stack_a->prev->next = new;
		ps->stack_a->prev = new;
	}
	ps->size_a++;
}
