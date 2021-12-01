/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:47:36 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/01 18:50:24 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ps_stack_new(int *nbrptr)
{
	t_stack	*data;

	data = malloc(sizeof(t_stack));
	if (data == NULL)
		error_print_exit("No memory for t_data!");
	data->nbr = *nbrptr;
	data->next = NULL;
	data->prev = NULL;
	return (data);
}

int	ps_stack_check_duplication(t_push_swap *ps, t_stack *new_elemnt)
{
	int		i;
	t_stack	*next;
	t_stack	*actual;

	if (ps->stack_a == NULL)
		return (1);
	actual = ps->stack_a;
	i = 0;
	while (i < ps->size_a)
	{
		if (actual->nbr == new_elemnt->nbr)
			return (0);
		actual = next;
		if (next->next == NULL)
			return (1);
		next = next->next;
		i++;
	}
	return (1);
}

void	ps_stack_add(t_push_swap *ps, t_stack *elemnt)
{	
	t_stack	*tmp;

	if (!elemnt)
		error_print_exit("Element is NULL, no insert in stack.");
	if (ps->stack_a == NULL)
		ps->stack_a = elemnt;
	else if (ps->stack_a->next == NULL && ps->stack_a->prev == NULL)
	{
		ps->stack_a->prev = elemnt;
		ps->stack_a->next = elemnt;
		elemnt->next = ps->stack_a;
		elemnt->prev = ps->stack_a;
	}
	else
	{		
		elemnt->next = ps->stack_a;
		elemnt->prev = ps->stack_a->prev;
		tmp = ps->stack_a->prev;
		tmp->next = elemnt;
		ps->stack_a->prev = elemnt;
	}
	ps->size_a++;
}

void	ps_create_stack_a(t_push_swap *ps)
{
	int		i;
	int		*nbrptr;
	int		nbr;
	t_stack	*new_elemnt;

	nbr = 0;
	nbrptr = &nbr;
	i = 0;
	while (ps->input_array[i])
	{
		if (ft_atoi_ext(ps->input_array[i], nbrptr))
		{			
			new_elemnt = ps_stack_new(nbrptr);
			if (new_elemnt == NULL)
				error_print_exit("New stack elem. is NULL.");
			if (ps_stack_check_duplication(ps, new_elemnt))
				ps_stack_add(ps, new_elemnt);
			else
				error_print_exit("No duplication input allowed!");
		}
		else
			error_print_exit("Invalid arguments in input params!");
		i++;
	}
}
