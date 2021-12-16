/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_remove_first.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:23:12 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/16 16:49:51 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_a_remove_first(t_push_swap *ps)
{
	t_stack	*ret;
	t_stack	*next;
	t_stack	*prev;

	if (ps->stack_a == NULL)
		return (NULL);
	ret = ps->stack_a;
	if (ps->stack_a->next == NULL && ps->stack_a->prev == NULL)
		ps->stack_a = NULL;
	else if (ps->stack_a->next && ps->stack_a->prev)
	{
		next = ps->stack_a->next;
		prev = ps->stack_a->prev;
		prev->next = next;
		next->prev = prev;
		ps->stack_a = next;
	}
	ret->next = NULL;
	ret->prev = NULL;
	return (ret);
}

t_stack	*stack_b_remove_first(t_push_swap *ps)
{
	t_stack	*ret;
	t_stack	*next;
	t_stack	*prev;
	bool	only2elem;

	only2elem = (ps->stack_b->next == ps->stack_b->prev);
	if (ps->stack_b == NULL)
		return (NULL);
	ret = ps->stack_b;
	if (ps->stack_b->next == NULL && ps->stack_b->prev == NULL)
		ps->stack_b = NULL;
	else if (ps->stack_b->next && ps->stack_b->prev)
	{
		next = ps->stack_b->next;
		prev = ps->stack_b->prev;
		prev->next = next;
		next->prev = prev;
		
		//
		// fix this problem!!!
		// 
		// check if 2 ele to 1. Point to null in that case.
		// change the system to track the last one.
		//
		if (only2elem)
			ps->stack_b = NULL;
		ps->stack_b = next;
	}
	ret->next = NULL;
	ret->prev = NULL;
	return (ret);
}
