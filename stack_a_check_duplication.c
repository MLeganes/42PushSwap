/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_a_check_duplication.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:10:28 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/02 20:08:31 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_a_check_duplication(t_push_swap *ps, t_stack *new_elemnt)
{
	int		i;
	t_stack	*actual;

	if (ps->stack_a == NULL)
		return (1);	
	actual = ps->stack_a;
	i = 0;
	while (i < ps->size_a && actual != NULL)
	{
		if (actual->nbr == new_elemnt->nbr)
			return (0);
		if (actual->next != NULL)
			actual = actual->next;
		i++;
	}
	return (1);
}
