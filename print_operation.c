/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_operation.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 20:17:17 by amorcill          #+#    #+#             */
/*   Updated: 2021/12/01 23:55:11 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_operation(char *s)
{	
	if (s == 0)
		return ;
	if (PRINT_OPERATION)
	{
		write(1, s, ft_strlen(s));
		write(1, "\n", 1);
	}
}

void print_debugger(char *s)
{
	ft_printf("\n[debugger] %s \n", s);
}