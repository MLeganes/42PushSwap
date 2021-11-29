/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:22:04 by amorcill          #+#    #+#             */
/*   Updated: 2021/11/29 21:04:59 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_push_swap *push_swap_init(void)
{
	t_push_swap *ps;
	
	ps = malloc(sizeof(t_push_swap));
	if (ps ==NULL)
		error_print_exit("No memory for t_push_swap structure!!");
	ps->stack_a = NULL;
	ps->stack_b = NULL;
	ps->size_a = 0;
	ps->size_b = 0;
	ps->input_array = NULL;
	ps->array_size = 0;
	ps->array_start = 0;
	return (ps);
}