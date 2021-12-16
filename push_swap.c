/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:36:24 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/15 22:09:07 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void push_swap(t_push_swap *ps)
{
	if (stack_issorted(ps))
		return ;	
	if (ps->size_a < 6)
	{
		stack_print(ps->stack_a, ps->size_a);
			algorithm_small(ps);
		stack_print(ps->stack_a, ps->size_a);
		stack_print(ps->stack_b, ps->size_b);
	}
	// else if (ps->size_a <= 100)
	// 	algorithm_medium(ps);
	else
	{
		while (!stack_issorted(ps))
			algorithm_large(ps);
	}
	return ;
}

int	main(int argc, char **argv)
{
	t_push_swap	*ps;

	ps = push_swap_init();
	get_argv(ps, argc, argv);
	push_swap(ps);
	// free everything!!!
	return (0);
}
