/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a_add_last.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:08:16 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/02 20:42:59 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief 			Add new elemnt at the end of the STACK_A.
 * 
 * @param ps 		Push_swap struct has access to stack_a.
 * @param elemnt 	New element to insert at the end of the Stack.
 */
void	stack_a_add_last(t_push_swap *ps, t_stack *elemnt)
{	
	t_stack	*prev;

	if (!elemnt)
		error_print_exit("Element is NULL, nothing to insert instack.");
	if (ps->stack_a == NULL)
		ps->stack_a = elemnt;
	else if (ps->stack_a->next == NULL && ps->stack_a->prev == NULL)
	{
		ps->stack_a->prev = elemnt;
		ps->stack_a->next = elemnt;
		elemnt->next = ps->stack_a;
		elemnt->prev = ps->stack_a;
	}
	else
	{		
		prev = ps->stack_a->prev;
		elemnt->next = ps->stack_a;
		elemnt->prev = prev;
		prev->next = elemnt;
		ps->stack_a->prev = elemnt;
	}
	ps->size_a++;
}
