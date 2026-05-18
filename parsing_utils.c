/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blast <blast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 10:55:48 by jait-ame          #+#    #+#             */
/*   Updated: 2026/05/17 17:40:42 by blast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stddef.h>
#include "push_swap.h"


int	ft_atoi(const char *nptr)
{
	int	i;
	int	negative;
	int	number;

	i = 0;
	negative = 1;
	number = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			negative = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = number * 10 + (nptr[i] - 48);
		i++;
	}
	return (negative * number);
}

int	valid_int(char	*nptr)
{
	int			i;
	int			negative;
	long long	number;

	i = 0;
	negative = 1;
	number = 0;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			negative = -1;
		i++;
	}
	if (!nptr[i])
		return (0);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = number * 10 + (nptr[i] - 48);
		if ((negative * number) > INT_MAX || (negative * number) < INT_MIN)
			return (0);
		i++;
	}
	if (nptr[i] != '\0')
		return (0);
	return (1);
}

