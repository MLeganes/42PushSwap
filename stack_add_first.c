/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add_first.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:41:07 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/17 18:16:21 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_a_add_first(t_push_swap *ps, t_stack *new)
{
	if (new == NULL)
		return ;
	if (ps->stack_a == NULL)
	{		
		new->next = new;
		new->prev = new;
		ps->stack_a = new;		
	}
	else 
	{			
		new->next = ps->stack_a;
		new->prev = ps->stack_a->prev;
		ps->stack_a->prev->next = new;
		ps->stack_a->prev = new;
		ps->stack_a = new;
	}
}

void	stack_b_add_first(t_push_swap *ps, t_stack *new)
{
	if (new == NULL)
		return ;
	if (ps->stack_b == NULL)
	{	
		new->next = new;
		new->prev = new;
		ps->stack_b = new;		
	}
	else 
	{			
		new->next = ps->stack_b;
		new->prev = ps->stack_b->prev;
		ps->stack_b->prev->next = new;
		ps->stack_b->prev = new;
		ps->stack_b = new;		
	}	
}
