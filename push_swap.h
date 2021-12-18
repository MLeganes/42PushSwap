/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:26:36 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/18 15:17:57 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/* ************************************************************************** */
/* STD LIBC INCLUDES														  */
/* ************************************************************************** */
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdbool.h>
# include <errno.h>
# include <sys/types.h>
# include <sys/unistd.h>

/* ************************************************************************** */
/* USER INCLUDES															  */
/* ************************************************************************** */
# include "libft/libft.h"

/* ************************************************************************** */
/* STRUCT DEFS															  	  */
/* ************************************************************************** */

# define PRINT_OPERATION 1

typedef struct s_stack
{
	int				nbr;
	int				rel;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

typedef struct s_push_swap
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		size_a;
	int		size_b;
	char	**input_array;
	int		array_size;
	int		array_start;
	int		chunk;
	bool	swap;
}	t_push_swap;

/* ************************************************************************** */
/* FUNCTION PROTOTYPES														  */
/* ************************************************************************** */

/*
 * ALGORITHM
 */
void	algorithm_small(t_push_swap *ps);
void	algorithm_large(t_push_swap *ps);

/*
 * PUSH SWAP 
 */
t_push_swap	*push_swap_init(void);
void		get_argv(t_push_swap *ps, int argc, char **argv);
void		ps_strtoarray(t_push_swap *ps, char *str);
void		push_swap_free(t_push_swap *ps);

/*
 * OPERATION PUSH
 */
void		operation_pa(t_push_swap *ps); //Testes!
void		operation_pb(t_push_swap *ps); //Testes!

/*
 * OPERATION REV ROTATE
 */
void		operation_rra(t_push_swap *ps); //Testes!
void		operation_rrb(t_push_swap *ps); //Testes!
void		operation_rrr(t_push_swap *ps); //Testes!

/*
 * OPERATION ROTATE
 */
void		operation_ra(t_push_swap *ps); //Testes!
void		operation_rb(t_push_swap *ps); //Testes!
void		operation_rr(t_push_swap *ps); //Testes!

/*
 * OPERATION SWAP
 */
void		operation_sa(t_push_swap *ps); //Testes!
void		operation_sb(t_push_swap *ps); //Testes!
void		operation_ss(t_push_swap *ps); //Testes!

/*
 * STACK OPERATION
 */
t_stack		*stack_new(int nbr);

void		stack_a_add_last(t_push_swap *ps, t_stack *elemnt);
int			stack_a_check_duplication(t_push_swap *ps, t_stack *new_elemnt);
void		stack_a_create(t_push_swap *ps);
void		stack_a_add_first(t_push_swap *ps, t_stack *new);
t_stack		*stack_a_remove_first(t_push_swap *ps);

void		stack_b_add_first(t_push_swap *ps, t_stack *new);
t_stack		*stack_b_remove_first(t_push_swap *ps);

void		stack_print(t_stack *tsk, int size);
int			stack_biggest(t_stack *stk, int size);
int			stack_smallest(t_stack *stk, int size);
bool		stack_issorted(t_push_swap *ps);
bool		stack_a_ismin(t_push_swap *ps, int nbr, int conv);
bool		stack_a_ismax(t_push_swap *ps, int nbr);
/*
 * PRINT OPERATION
 */
void		print_operation(char *s);

/*
 * ERROR
 */
void		error_print_exit(void);

#endif
