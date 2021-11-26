/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:26:36 by amorcill          #+#    #+#             */
/*   Updated: 2021/11/26 15:43:27 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# endif

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

typedef struct s_push_swap
{
	t_stack *stack_a;
	t_stack *stack_b;
	int		size_a;
	int		size_b;
	int		size;
	char	**input;
	
} t_push_swap;


/* ************************************************************************** */
/* FUNCTION PROTOTYPES														  */
/* ************************************************************************** */

/*
 * PUSH SWAP
 */


/*
 * CHECK INPUT
 */

void get_argv(t_push_swap *ps, int argc, char **argv);

/*
 * STACK
 */
void stack_init(t_push_swap *ps);

/*
 * ERROR
 */
void	error_print_exit(char *error_msg);
