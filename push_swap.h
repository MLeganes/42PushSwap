/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:26:36 by amorcill          #+#    #+#             */
/*   Updated: 2021/11/29 12:27:42 by amorcill         ###   ########.fr       */
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
typedef struct s_stack
{
	int		id;
	int		nbr;
	struct s_stack *next;
	struct s_stack *prev;
} t_stack;

typedef struct s_data
{
	int		id;
	int		nbr;
	struct s_stack *next;
	struct s_stack *prev;
} t_data;

typedef struct s_push_swap
{
	t_data *stack_a;
	t_data *stack_b;
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
 * PUSH SWAP
 */


/*
 * PUSH SWAP UTILS
 */

/*
 * CHECK INPUT
 */

void	get_argv(t_push_swap *ps, int argc, char **argv);
void	ps_strtoarray(t_push_swap *ps, char *str);
void	ps_create_stack_a(t_push_swap *ps);

/*
 * STACK
 */
void stack_init(t_push_swap *ps);

/*
 * ERROR
 */
void	error_print_exit(char *error_msg);

# endif