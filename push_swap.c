/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:36:24 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/19 22:23:21 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_swap(t_push_swap *ps)
{
	if (stack_issorted(ps))
		return ;
	if (ps->size_a < 7)
	{
		algorithm_small(ps);
	}	
	else
	{
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
	push_swap_free(ps);
	system ("leaks push_swap");
	return (0);
}
