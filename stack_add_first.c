/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add_first.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:41:07 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/02 21:38:24 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_a_add_first(t_push_swap *ps, t_stack *new)
{
	t_stack	*next;
	t_stack	*prev;

	if (new == NULL)
		return ;
	if (ps->stack_a == NULL)
		ps->stack_a = new;
	else if (ps->stack_a->next == NULL && ps->stack_a->prev == NULL)
	{
		new->next = ps->stack_a;
		new->prev = ps->stack_a;
		ps->stack_a->next = new;
		ps->stack_a->prev = new;
		ps->stack_a = new;
	}
	else
	{
		next = ps->stack_a->next;
		prev = ps->stack_a->prev;
		ps->stack_a->prev = new;
		new->prev = prev;
		new->next = ps->stack_a;
		prev->next = new;
		ps->stack_a = new;
	}
}

void	stack_b_add_first(t_push_swap *ps, t_stack *new)
{
	t_stack	*next;
	t_stack	*prev;

	if (new == NULL)
		return ;
	if (ps->stack_b == NULL)
		ps->stack_b = new;
	else if (ps->stack_b->next == NULL && ps->stack_b->prev == NULL)
	{
		new->next = ps->stack_b;
		new->prev = ps->stack_b;
		ps->stack_b->next = new;
		ps->stack_b->prev = new;
		ps->stack_b = new;
	}
	else
	{
		next = ps->stack_b->next;
		prev = ps->stack_b->prev;
		ps->stack_b->prev = new;
		new->prev = prev;
		new->next = ps->stack_b;
		prev->next = new;
		ps->stack_b = new;
	}
}
