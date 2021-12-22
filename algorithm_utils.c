/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/19 17:22:46 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/22 13:40:53 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algorithm_normalization(t_push_swap *ps)
{
	int		i;
	t_stack	*tmp;

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

static void	algorithm_chunkcalculator(t_push_swap *ps)
{
	int	res;
	int	size;

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

void	algorithm_createchuncks(t_push_swap *ps)
{
	int		i;
	int		j;
	t_stack	*tmp;

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
		if (i == ps->chunk * j)
			j++;
	}
}

int	algorithm_b_shortesway2rotate(t_push_swap *ps, int nbr)
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

int	algorithm_a_shortesway2rotate(t_push_swap *ps, int nbr)
{
	t_stack	*tmp;
	int		pos;

	tmp = ps->stack_a;
	pos = 0;
	while (pos < ps->size_a)
	{
		if (tmp->nbr == nbr)
		{
			return (pos > (ps->size_a / 2));
		}
		pos++;
		tmp = tmp->next;
	}
	return (1);
}
