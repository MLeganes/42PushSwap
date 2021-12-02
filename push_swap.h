/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:26:36 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/02 22:31:52 by amorcill         ###   ########.fr       */
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
#include <sys/unistd.h>

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
	int		id;
	int		nbr;
	struct s_stack *next;
	struct s_stack *prev;
} t_stack;

typedef struct s_push_swap
{
	t_stack *stack_a;			// Pointer to first element , stack a.
	t_stack *stack_b;
	int		size_a;
	int		size_b;
	char	**input_array;
	int		array_size;
	int		array_start;
	
} t_push_swap;


/* ************************************************************************** */
/* FUNCTION PROTOTYPES														  */
/* ************************************************************************** */

/*
 * PUSH SWAP INIT
 */
t_push_swap *push_swap_init(void);
void	get_argv(t_push_swap *ps, int argc, char **argv);
void	ps_strtoarray(t_push_swap *ps, char *str);

/*
 * OPERATION PUSH
 */
void operation_pa(t_push_swap *ps); //Testes!
void operation_pb(t_push_swap *ps); //Testes!

/*
 * OPERATION REV ROTATE
 */
void	operation_rra(t_push_swap *ps);
void	operation_rrb(t_push_swap *ps);
void	operation_rrr(t_push_swap *ps);

/*
 * OPERATION ROTATE
 */
void	operation_ra(t_push_swap *ps);
void	operation_rb(t_push_swap *ps);
void	operation_rr(t_push_swap *ps);

/*
 * OPERATION SWAP
 */
void	operation_sa(t_push_swap *ps);
void	operation_sb(t_push_swap *ps);
void	operation_ss(t_push_swap *ps);

/*
 * STACK OPERATION
 */
void	stack_a_add_last(t_push_swap *ps, t_stack *elemnt);
int		stack_a_check_duplication(t_push_swap *ps, t_stack *new_elemnt);
void	stack_a_create(t_push_swap *ps);
void	stack_a_add_first(t_push_swap *ps, t_stack *new); //Testes!
void	stack_b_add_first(t_push_swap *ps, t_stack *new); //Testes!
t_stack	*stack_new(int nbr);
t_stack *stack_a_remove_first(t_push_swap *ps); //Testes!
t_stack *stack_b_remove_first(t_push_swap *ps); //Testes!


/*
 * PRINT OPERATION
 */
void print_operation(char *s); 
void print_debugger(char *s);

/*
 * ERROR
 */
void	error_print_exit(char *error_msg);

# endif