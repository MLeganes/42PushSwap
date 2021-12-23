/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_init.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:22:04 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/23 13:46:36 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_push_swap	*push_swap_init(void)
{
	t_push_swap	*ps;

	ps = NULL;
	ps = malloc(sizeof(t_push_swap));
	if (ps == NULL)
		error_print_exit();
	ps->stack_a = NULL;
	ps->stack_b = NULL;
	ps->size_a = 0;
	ps->size_b = 0;
	ps->input_array = NULL;
	ps->array_size = 0;
	ps->chunk = 0;
	ps->swap = false;
	return (ps);
}

void	get_argv(t_push_swap *ps, int args, char **argv)
{	
	if (args < 2)
	{
		system("leaks push_swap");
		exit (0);
	}
	if (args == 2)
	{
		if (ft_strlen(argv[1]) == 0)
			error_print_exit();
		if (argv[1][0] == '\n')
			error_print_exit();
		ps_strtoarray(ps, argv[1]);
		stack_a_create(ps);
	}
	else if (args > 2)
	{
		ps->array_size = args - 1;
		ps->input_array = &argv[1];
		stack_a_create(ps);
	}
}

void	ps_strtoarray(t_push_swap *ps, char *str)
{
	ps->input_array = ft_split(str, ' ');
	if (!ps->input_array)
		error_print_exit();
	return ;
}
