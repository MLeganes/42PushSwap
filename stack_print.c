/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_print.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 23:38:25 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/19 23:02:32 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_print(t_stack *tsk, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		ft_printf("%d\n", tsk->nbr);
		tsk = tsk->next;
		i++;
	}
	write(1, "---\n", 4);
}
