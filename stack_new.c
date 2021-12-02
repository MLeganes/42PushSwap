/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:11:55 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/02 15:12:53 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(int *nbrptr)
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
