/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_push.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 00:42:48 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/16 15:54:48 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/**
 * @brief 	Push a- take the first element at the top of b(src)
 * 			and put it at the top of a(dest).
 * 			Do nothing if b is empty.
 * 
 * @param ps Struct with stack a, b and more info. 
 */
void	operation_pa(t_push_swap *ps)
{
	t_stack	*tmp;

	tmp = stack_b_remove_first(ps);
	if (tmp)
		stack_a_add_first(ps, tmp);
	print_operation("pa");
	ps->size_a++;
	ps->size_b--;
}

/**
 * @brief 	Push b- take the first element at the top of a(src)
 * 			and put it at the top of b(dest).
 * 			Do nothing if a is empty
 * 
 * @param ps Struct with stack a, b and more info. 
 */
void	operation_pb(t_push_swap *ps)
{
	t_stack	*tmp;

	tmp = stack_a_remove_first(ps);
	if (tmp)
		stack_b_add_first(ps, tmp);
	print_operation("pb");
	ps->size_a--;
	ps->size_b++;
}
