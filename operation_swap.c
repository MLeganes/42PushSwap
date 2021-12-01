/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_swap.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 19:51:23 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/01 21:01:22 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void operation_swap(t_push_swap *ps)
{
	int tmp;

	tmp = ps->stack_a->nbr;
	ps->stack_a->nbr = ps->stack_a->next->nbr;
	ps->stack_a->next->nbr = tmp;
	print_operation("sa");
}

