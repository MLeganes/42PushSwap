/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 19:31:21 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/23 14:01:13 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap_free(t_push_swap *ps)
{
	t_stack	*tmp;

	while (ps->size_a > 0)
	{
		tmp = stack_a_remove_first(ps);
		if (tmp != NULL)
		{
			free(tmp);
			tmp = NULL;
		}
		ps->size_a--;
	}	
	while (ps->size_b > 0)
	{
		tmp = stack_b_remove_first(ps);
		if (tmp != NULL)
		{
			free(tmp);
			tmp = NULL;
		}
		ps->size_b--;
	}	
	if (ps != NULL)
	{
		free (ps->input_array);
		free(ps);
		ps = NULL;
	}
}
