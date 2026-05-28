/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 13:35:15 by edemay            #+#    #+#             */
/*   Updated: 2026/05/28 12:45:23 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_putnbr2(int c)
{
	char	d;
	long	cl;
	int		count;

	count = 0;
	cl = c;
	if (cl < 0)
	{
		write(1, "-", 1);
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

int	print_double(double n)
{
	double	current;
	int		entier;
	int		decimal;
	int		count;

	count = 0;
	current = n;
	current *= 100;
	entier = current;
	if (entier == 0)
		write(1, "00.", 3);
	else
		count += ft_putnbr2(entier);
	entier *= 100;
	current *= 100;
	decimal = current - entier;
	write(1, ".", 1);
	if (decimal == 0)
		write(1, "00", 2);
	else
		count += ft_putnbr2(decimal);
	return (count);
}
