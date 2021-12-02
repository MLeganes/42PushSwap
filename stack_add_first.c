/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add_first.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 12:41:07 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/02 13:53:17 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_add_first(t_stack *stk, t_stack *new)
{
	t_stack	*next;
	t_stack	*prev;

	if (new == NULL)
		return ;
	if (stk == NULL)
		stk = new;
	if (stk->next == NULL && stk->prev == NULL)
	{
		new->next = stk;
		new->prev = stk;
		stk->next = new;
		stk->prev = new;
		stk = new;
	}
	else
	{
		next = stk->next;
		prev = stk->prev;
		stk->prev = new;
		new->prev = prev;
		new->next = stk;
		prev->next = new;
		stk = new;
	}
}
