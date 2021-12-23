/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_error.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 16:15:53 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/23 13:45:11 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	error_print_exit(void)
{		
	ft_putstr_fd("Error\n", STDERR_FILENO);
	system("leaks push_swap");
	exit (EXIT_FAILURE);
}
