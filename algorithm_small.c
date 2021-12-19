/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_small.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 01:04:46 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/19 17:18:29 by amorcill         ###   ########.fr       */
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

static void	algorithm_push_b_min(t_push_swap *ps)
{
	int		smallest;
	t_stack	*tmp;

	smallest = stack_smallest(ps->stack_a, ps->size_a);
	tmp = ps->stack_a;
	while (1)
	{
		if (tmp->nbr == smallest)
		{
			operation_pb(ps);
			break ;
		}
		tmp = tmp->next;
		operation_ra(ps);
	}
}

static void	sort_small(t_push_swap *ps)
{
	while (ps->size_a > 3)
	{
		algorithm_push_b_min(ps);
	}
	sort_3(ps);
	while (ps->size_b > 0)
		operation_pa(ps);
}

void	algorithm_small(t_push_swap *ps)
{
	if (ps->size_a == 2)
	{
		if (ps->stack_a->nbr > ps->stack_a->next->nbr)
			operation_sa(ps);
	}
	else if (ps->size_a == 3)
		sort_3(ps);
	else
		sort_small(ps);
}
