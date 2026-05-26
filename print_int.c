/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:16:51 by edemay            #+#    #+#             */
/*   Updated: 2026/05/24 15:08:53 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_putnbr2(int c)
{
	char	d;
	char	minus;
	long	cl;
	int		count;

	count = 0;
	cl = c;
	minus = '-';
	if (cl < 0)
	{
		write(1, &minus, 1);
		cl = -cl;
		count++;
	}
	d = cl % 10 + '0';
	cl = cl / 10;
	count++;
	if (cl > 0)
	{
		count += ft_putnbr2(cl);
	}
	write(1, &d, 1);
	return (count);
}

int	print_decimal(int n)
{
	int	current;
	int	count;

	count = 0;
	current = n;
	count = ft_putnbr2(current);
	return (count);
}
