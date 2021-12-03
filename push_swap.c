/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:36:24 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/03 01:08:04 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_push_swap	*ps;

	ps = push_swap_init();
	get_argv(ps, argc, argv);

	operation_pb(ps);
	operation_pb(ps);
	operation_pb(ps);
	
	ft_printf("\n Stack a\n");
	stack_print(ps->stack_a, ps->size_a);
	
	ft_printf("\n Stack b\n");
	stack_print(ps->stack_b, ps->size_b);
	
	
	operation_ss(ps);	
	
	ft_printf("\n Stack a\n");
	stack_print(ps->stack_a, ps->size_a);
	
	ft_printf("\n Stack b\n");
	stack_print(ps->stack_b, ps->size_b);
	

	
	return (0);
}
