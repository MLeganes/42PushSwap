/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_issorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 12:05:34 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/19 23:00:28 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	stack_issorted(t_push_swap *ps)
{
	int		i;
	t_stack	*temp;

	if (ps->stack_b == NULL)
	{		
		if (ps->size_a == 1)
			return (true);
		i = 1;
		temp = ps->stack_a;
		while (i < ps->size_a)
		{
			if (temp->nbr < temp->next->nbr)
			{
				temp = temp->next;
				i++;
			}
			else
				return (false);
		}		
	}
	return (true);
}

bool	stack_a_ismin(t_push_swap *ps, int nbr, int conv)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = ps->stack_a;
	while (i < ps->size_a)
	{
		if (conv && tmp->nbr < nbr && tmp->rel == 0)
			return (false);
		if (!conv && tmp->nbr < nbr)
			return (false);
		tmp = tmp->next;
		i++;
	}
	return (true);
}

bool	stack_a_ismax(t_push_swap *ps, int nbr)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = ps->stack_a;
	while (i < ps->size_a)
	{
		if (tmp->nbr > nbr)
			return (false);
		tmp = tmp->next;
	}
	return (true);
}
