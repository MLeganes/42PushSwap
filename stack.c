/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:47:36 by amorcill          #+#    #+#             */
/*   Updated: 2021/11/29 22:55:31 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ps_stack_new(int *nbrptr)
{
	t_stack *data;

	data = malloc(sizeof(t_stack));
	if (data == NULL)
		error_print_exit("No memory for t_data!");
	data->nbr = *nbrptr; 
	data->next = NULL;
	data->prev = NULL;
	return (data);
}

void	ps_stack_add(t_push_swap *ps, t_stack *node)
{	
	if ( ps->stack_a == NULL)
	{
		ps->stack_a = node;
	}
	
}

void	ps_create_stack_a(t_push_swap *ps)
{
	int	i;
	int	*nbrptr;
	int	nbr;
	t_stack *node,
	
	nbr = 0;
	nbrptr = &nbr;
	i = 0;
	while (ps->input_array[i])
	{
		if (ft_strtoi(ps->input_array[i], nbrptr))
		{
			node = ps_stack_new(nbrptr);
			if (node == NULL)
			{
				// putadata!
			}
			ps_stack_add(ps, node);
			ft_printf("argv ft_strtoi value: %d\n", *nbrptr);
		}
		else
			error_print_exit("Invalid arguments in input params.");
		i++;
	}
}
