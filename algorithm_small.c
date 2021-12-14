/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_small.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 01:04:46 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/13 10:45:27 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void sort_3(t_push_swap *ps)
{
	int	a;
	int	b;
	int	c;

	a = ps->stack_a->nbr;
	b = ps->stack_a->next->nbr;
	c = ps->stack_a->prev->nbr;
	// CASE 1
	if (c > a && c > b && a > b)
		operation_sa(ps);
	// CASE 2
	else if (a > b && a > c && b > c)
	{
		operation_sa(ps);
		operation_rra(ps);		
	}
	// CASE 3
	else if (a > b && a > c && c > b)
		operation_ra(ps);
	// CASE 4
	else if (b > a && b > c && c > a)
	{
		operation_rra(ps);
		operation_sa(ps);
	}
	// CASE 5
	else if (b > a && b > c && a > c)
		operation_rra(ps);
}

void algorithm_small(t_push_swap *ps)
{
	if (ps->size_a == 2)
		operation_sa(ps);
	else
	{
		while (ps->size_a > 3)
			operation_pb(ps);
		sort_3(ps);
	}
	return ;
}
