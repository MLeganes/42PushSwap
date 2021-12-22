/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_large.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:31:32 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/22 13:07:13 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	algorithm_shortesway2rotate(t_push_swap *ps, int nbr)
{
	t_stack	*tmp;
	int		pos;

	tmp = ps->stack_b;
	pos = 0;
	while (pos < ps->size_b)
	{
		if (tmp->nbr == nbr)
		{
			return (pos > (ps->size_b / 2));
		}
		pos++;
		tmp = tmp->next;
	}
	return (1);
}

static void	algorithm_putnumbertop(t_push_swap *ps, int nbr)
{
	int	dir;

	dir = algorithm_shortesway2rotate(ps, nbr);
	while (ps->stack_b->nbr != nbr)
	{
		if (ps->stack_b->nbr == (nbr - 1) && ps->swap == false)
		{
			operation_pa(ps);
			ps->swap = true;
		}			
		else if (dir == 1)
			operation_rrb(ps);
		else
			operation_rb(ps);
	}	
}

static void	algorithm_pushinorder(t_push_swap *ps)
{
	int	i;

	i = ps->size_b;
	i--;
	while (i >= 0)
	{
		algorithm_putnumbertop(ps, i);
		operation_pa(ps);
		i--;
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
