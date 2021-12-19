/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_remove_first.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:23:12 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/19 23:03:32 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_a_remove_first(t_push_swap *ps)
{
	t_stack	*ret;

	if (ps->stack_a == NULL)
		return (NULL);
	ret = ps->stack_a;
	if (ps->stack_a == ps->stack_a->next)
	{
		ps->stack_a = NULL;
	}
	else
	{		
		ps->stack_a->next->prev = ret->prev;
		ps->stack_a->prev->next = ret->next;
		ps->stack_a = ret->next;
	}	
	return (ret);
}

t_stack	*stack_b_remove_first(t_push_swap *ps)
{
	t_stack	*ret;

	if (ps->stack_b == NULL)
		return (NULL);
	ret = ps->stack_b;
	if (ps->stack_b == ps->stack_b->next)
	{
		ps->stack_b = NULL;
	}
	else
	{		
		ps->stack_b->next->prev = ret->prev;
		ps->stack_b->prev->next = ret->next;
		ps->stack_b = ret->next;
	}	
	return (ret);
}
