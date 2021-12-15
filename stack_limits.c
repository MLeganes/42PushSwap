/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_limits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/14 11:56:56 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/15 15:47:07 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int stack_biggest(t_stack *stk, int size)
{
	//find biggest number
	t_stack *temp;
	t_stack *biggest;
	int i;

	i = 0;
	temp = stk;
	biggest = stk;
	while (i < size)
	{
		if (temp->nbr > temp->next->nbr)
			biggest = temp;
		temp = temp->next;
		i++;		
	}
	return 0;
}

int stack_smallest(t_stack *stk)
{
	// find smallest

	return 0;
}