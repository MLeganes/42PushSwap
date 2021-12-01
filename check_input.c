/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:23:35 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/01 16:14:58 by amorcill         ###   ########.fr       */
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
	int	i;

	ps->input_array = ft_split(str, ' ');
	if (!ps->input_array)
		error_print_exit("Error reading string argv");
	i = 0;
	while (ps->input_array[i] != NULL)
		i++;
	ps->array_size = i;
	ft_printf("argv nubers: %d \n", i);
	return ;
}
