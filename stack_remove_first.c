/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_remove_first.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 10:23:12 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/02 13:32:41 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *stack_remove_first(t_stack *stk)
{
	t_stack *ret;
	t_stack *next;
	t_stack *prev;
	
	if (stk == NULL)
		return (NULL);
	ret = stk;
	if (stk->next == NULL && stk->prev == NULL)
		stk = NULL;
	else if (stk->next && stk->prev)
	{
		next = stk->next;
		prev = stk->prev;
		prev->next = next;
		next->prev = prev;	
		stk = next;		
	}
	ret->next = NULL;
	ret->prev = NULL;
	return (ret);
}
