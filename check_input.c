/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:23:35 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/01 17:40:45 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_argv(t_push_swap *ps, int args, char **argv)
{
	if (args < 2)
		error_print_exit("Invalid input arguments.");
	if (args == 2)
	{
		ps_strtoarray(ps, argv[1]);
		ps->array_start = 0;
		ps_create_stack_a(ps);
	}
	else if (args > 2)
	{
		ps->array_size = args - 1;
		ps->input_array = &argv[1];
		ps->array_start = 1;
		ps_create_stack_a(ps);
	}
}

void	ps_strtoarray(t_push_swap *ps, char *str)
{
	ps->input_array = ft_split(str, ' ');
	if (!ps->input_array)
		error_print_exit("Error reading string argv");	
	return ;
}
