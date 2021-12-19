/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_large.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:31:32 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/19 17:24:41 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

static void	stack_b_rotate(t_push_swap *ps, int pos, int nbr)
{
	int	dir;

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

static void	algorithm_numbertotop(t_push_swap *ps, int nbr)
{
	t_stack	*tmp;
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

static void	algorithm_pushinorder(t_push_swap *ps)
{
	int	i;

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
