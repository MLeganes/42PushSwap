/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_limits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:56:56 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/18 14:25:14 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int stack_biggest(t_stack *stk, int size)
{
	t_stack *temp;
	t_stack *biggest;
	int i;

	i = 0;
	temp = stk;
	biggest = stk;
	while (i < size)
	{
		if (biggest->nbr < temp->nbr)
			biggest = temp;
		temp = temp->next;
		i++;		
	}
	return (biggest->nbr);
}

int stack_smallest(t_stack *stk, int size)
{
	t_stack *temp;
	t_stack *smallest;
	int i;

	i = 0;
	temp = stk;
	smallest = stk;
	while (i < size)
	{
		if (smallest->nbr > temp->nbr)
			smallest = temp;
		temp = temp->next;
		i++;		
	}
	return (smallest->nbr);
}