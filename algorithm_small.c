/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_small.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 01:04:46 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/15 18:30:59 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_3(t_push_swap *ps)
{
	int	a;
	int	b;
	int	c;

	a = ps->stack_a->nbr;
	b = ps->stack_a->next->nbr;
	c = ps->stack_a->prev->nbr;
	if (c > a && c > b && a > b)
		operation_sa(ps);
	else if (a > b && a > c && b > c)
	{
		operation_sa(ps);
		operation_rra(ps);
	}
	else if (a > b && a > c && c > b)
		operation_ra(ps);
	else if (b > a && b > c && c > a)
	{
		operation_rra(ps);
		operation_sa(ps);
	}
	else if (b > a && b > c && a > c)
		operation_rra(ps);
}

void	algorithm_small(t_push_swap *ps)
{
	if (ps->size_a == 2)
	{
		if (ps->stack_a->nbr > ps->stack_a->next->nbr)
			operation_sa(ps);
		return ;
	}
	else if (ps->size_a == 3)
	{
		sort_3(ps);
		return ;
	}
	else
	{
		while (ps->size_a > 3)
			operation_pb(ps);
		sort_3(ps);
		while (ps->size_b)
		{
			// to do
		}
		return ;
	}
}
