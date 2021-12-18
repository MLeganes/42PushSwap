/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:31:21 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/18 17:24:43 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void push_swap_free(t_push_swap *ps)
{
	t_stack *tmp;

	while (ps->size_a > 0)
	{
		tmp = ps->stack_a;
		ps->stack_a = ps->stack_a->next;
		if (tmp != NULL)
			free(tmp);
		ps->size_a--;
	}
	while (ps->size_b > 0)
	{
		tmp = ps->stack_b;
		ps->stack_b = ps->stack_b->next;
		if (tmp != NULL)
			free(tmp);
		ps->size_b--;
	}
	
	if (ps != NULL)
		free(ps);
}