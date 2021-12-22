/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_large.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:31:32 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/22 10:28:04 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"



// check func.
/***
 *  Try tester without this aproch
 */
// static int	algorithm_foundnext(t_push_swap *ps, int nbr)
// {
// 	if (ps->stack_b->nbr == nbr && !ps->swap)
// 	{		
// 		operation_pa(ps);
// 		ps->swap = true;
// 		return (1);
// 	}
// 	return (0);
// }



// old function.
// Put number on top, calculate shortes dir.
// static void	stack_b_rotate(t_push_swap *ps, int pos, int nbr)
// {
// 	int	dir;

// 	dir = (pos > (ps->size_b / 2));
// 	if (dir == 1)
// 	{
// 		while (ps->stack_b->nbr != nbr)
// 		{
// 			if (!algorithm_foundnext(ps, nbr - 1))
// 				operation_rrb(ps);
// 		}
// 	}
// 	else
// 	{
// 		while (ps->stack_b->nbr != nbr)
// 		{
// 			if (!algorithm_foundnext(ps, nbr - 1))
// 				operation_rb(ps);
// 		}
// 	}
// }

// old funct.
// static void	algorithm_numbertotop(t_push_swap *ps, int nbr)
// {
// 	t_stack	*tmp;
// 	int		pos;

// 	tmp = ps->stack_b;
// 	pos = 0;
// 	while (1)
// 	{
// 		if (tmp->nbr == nbr)
// 			break ;
// 		pos++;
// 		tmp = tmp->next;
// 	}
// 	stack_b_rotate(ps, pos, nbr);
// }



/**
 *  New function.
 */
 // Find shortest way to rotate the stack.
static int	algorithm_shortesway2rotate(t_push_swap *ps, int nbr)
{
	t_stack	*tmp;
	int		pos;

	tmp = ps->stack_b;
	pos = 0;
	while (pos < ps->size_b)
	//while (1)
	{
		if (tmp->nbr == nbr)
		{
			return (pos > (ps->size_b / 2));
		}
		pos++;
		tmp = tmp->next;
	}
	return (1);
}

/**
 *  New function.
 *  Only put right nbr on top.
 */
static void	algorithm_putnumbertop(t_push_swap *ps, int nbr)
{
	int	dir;

	dir = algorithm_shortesway2rotate(ps, nbr);
	if (dir == 1)
	{
		while (ps->stack_b->nbr != nbr)
		{
			operation_rrb(ps);
		}
	}
	else
	{
		while (ps->stack_b->nbr != nbr)
		{
			operation_rb(ps);
		}
	}
}

static void	algorithm_pushinorder(t_push_swap *ps)
{
	int	i;

	i = ps->size_b;
	i--;
	while (i >= 0)
	{
		//algorithm_numbertotop(ps, i);
		algorithm_putnumbertop(ps, i);
		
		// No find next n - 1.

		// if the right number is found, push A
		operation_pa(ps);

		// Check this code.
		// try without find-next-number in same code.
		// if (ps->swap == true)
		// {
		// 	if (ps->size_b > 1 && ps->stack_b->nbr < ps->stack_b->next->nbr)
		// 		operation_ss(ps);
		// 	else
		// 		operation_sa(ps);
		// 	ps->swap = false;
		// 	i--;
		// }
		i--;
	}
	return ;
}

void	algorithm_large(t_push_swap *ps)
{
	algorithm_normalization(ps);
	algorithm_createchuncks(ps);
	algorithm_pushinorder(ps);
	return ;
}
