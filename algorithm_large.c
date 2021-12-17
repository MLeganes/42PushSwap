/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_large.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:31:32 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/17 19:48:38 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void algorithm_chunkcalculator(t_push_swap *ps)
{
	int res;
	int size;

	size = ps->size_a;
	res = 0;
	if (ps->size_a > 1)
	{
		res = ((3 * size) / 40) + (45 / 2);
		while (res % 5 != 0)
			res += 1;
	}
	ps->chunk = res;
}

static void algorithm_createchuncks(t_push_swap *ps)
{
	int i;
	int j;
	t_stack *tmp;

	algorithm_chunkcalculator(ps);
	i = 0;
	j = 1;
	while (ps->size_a != 0)
	{
		tmp = ps->stack_a;
		if (tmp->nbr < (ps->chunk * j))
		{
			operation_pb(ps);
			if (tmp->nbr < (ps->chunk * j) - (ps->chunk / 2))
				operation_rb(ps);
			i++;
		}
		else
			operation_ra(ps);
		if (i == ps->chunk *j)
			j++;
	}
}

static void	algorithm_normalization(t_push_swap *ps)
{
	int i;	
	t_stack *tmp;

	i = 0;
	tmp = ps->stack_a;
	while (i < ps->size_a)
	{
		if (tmp->rel == 0 && stack_a_ismin(ps, tmp->nbr, 1))
		{
			tmp->nbr = i;
			tmp->rel = 1;
			i++;
		}
		tmp = tmp->next;
	}
}

static int	algorithm_foundnext(t_push_swap *ps, int nbr)
{
	if (ps->stack_b->nbr == nbr && !ps->swap)
	{		
		operation_pa(ps);
		ps->swap = true;
		return (1);
	}
	return (0);
}

static void stack_b_rotate(t_push_swap *ps, int pos, int nbr)
{
	int dir;

	dir = (pos > (ps->size_b / 2));
	if (dir == 1)
	{
		while (ps->stack_b->nbr != nbr)
		{
			if (!algorithm_foundnext(ps, nbr - 1))
				operation_rrb(ps);
		}
	}
	else
	{
		while (ps->stack_b->nbr != nbr)
		{
			if (!algorithm_foundnext(ps, nbr - 1))
				operation_rb(ps);
		}
	}
}

static void algorithm_numbertotop(t_push_swap *ps, int nbr)
{
	t_stack *tmp;
	int		pos;

	tmp = ps->stack_b;
	pos = 0;

	while (1)
	{
		if (tmp->nbr == nbr)
			break ;
		pos++;
		tmp = tmp->next;
	}
	stack_b_rotate(ps, pos, nbr);
}

static void algorithm_pushinorder(t_push_swap *ps)
{
	int i;

	i = ps->size_b;
	while (--i >= 0)
	{
		algorithm_numbertotop(ps, i);
		operation_pa(ps);
		if (ps->swap == true)
		{
			if (ps->size_b > 1 && ps->stack_b->nbr < ps->stack_b->next->nbr)
				operation_ss(ps);
			else
				operation_sa(ps);
			ps->swap = false;
			i--;
		}
	}
	return ;
}

void	algorithm_large(t_push_swap *ps)
{	
	algorithm_normalization(ps);	
	algorithm_createchuncks(ps);
	algorithm_pushinorder(ps);
	return ;
}