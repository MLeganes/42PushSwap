/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:38:51 by amorcill          #+#    #+#             */
/*   Updated: 2021/11/26 15:15:20 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c);
static int	ft_sign(char c);

static int	ft_isspace(char c)
{
	if ((c == '\t' || c == '\v' || c == '\f' || c == '\r' || c == '\n'
			|| c == ' '))
		return (1);
	return (0);
}

static int	ft_sign(char c)
{
	if (c == '-')
		return (-1);
	return (1);
}

/* 
 * DESCRIPTION
 * The ft_strtoi() function converts the string in str to a int value.
 * The string may begin with an arbitrary amount of white space (as 
 * determined by ft_isspace) followed by a single optional `+' or `-' 
 * sign.  If base is taken as 10 (decimal) by default.
 * 
 * RETURN VALUES
 * The ft_strtoi() function return the result of the conversion:
 * 0 the conversion was successful.
 * -1 is returned, if no conversion could be performed.
 */
int	ft_strtoi(const char *str, int *nbr)
{
	unsigned int	result;
	int				sign;
	int				temp;

	sign = 1;
	result = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
	{
		sign = ft_sign(*str);
		str++;
	}
	while (ft_isdigit(*str) && *str != '\0' && result < 2147483648)
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	if ((sign == -1 && result <= 2147483648)
		|| (sign == 1 && result <= 2147483647))
	{
		temp = (sign * (int)result);		
		*nbr = temp;
		return (0);
	}
	return (-1);
}
