/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 12:38:51 by amorcill          #+#    #+#             */
/*   Updated: 2021/11/29 19:17:00 by amorcill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c == '\t' || c == '\v' || c == '\f' || c == '\r' || c == '\n'
			|| c == ' '))
		return (1);
	return (0);
}

/* 
 * DESCRIPTION
 * The ft_strtoi() function converts the string in str to a int value.
 * The string may begin with an arbitrary amount of white space (as 
 * determined by ft_isspace) followed by a single optional `+' or `-' 
 * sign. Base is taken as 10 (decimal) by default.
 * 
 * RETURN VALUES
 * The ft_strtoi() function return the result of the conversion:
 * 1 the conversion was successful.
 * 0 is returned, if no conversion could be performed.
 */
int	ft_strtoi(char *str, int *nbr)
{
	unsigned int	result;
	int				sign;
	int				i;

	sign = 1;
	result = 0;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]) && str[i] != '-' && str[i] != '+')
			return (0);
		if (str[i] == '+' || str[i] == '-')
		{
			if (!ft_isdigit(str[i + 1]))
				return (0);
		}
		i++;
	}	
	*nbr = ft_atoi(str);
	return (1);
}
