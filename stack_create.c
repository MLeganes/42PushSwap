/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_create.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 20:47:36 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/03 01:39:08 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_a_create(t_push_swap *ps)
{
	int		i;
	int		nbr;
	t_stack	*new_elemnt;

	nbr = 0;
	i = 0;
	while (ps->input_array[i])
	{
		if (ft_atoi_ext(ps->input_array[i], &nbr))
		{
			new_elemnt = stack_new(nbr);
			if (new_elemnt == NULL)
				error_print_exit("New element is NULL.");
			if (stack_a_check_duplication(ps, new_elemnt))
				stack_a_add_last(ps, new_elemnt);
			else
				error_print_exit("No duplication input allowed!");
		}
		else
			error_print_exit("Invalid arguments in input params!");
		i++;
	}
}
