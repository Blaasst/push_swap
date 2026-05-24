/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_double.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 13:35:15 by edemay            #+#    #+#             */
/*   Updated: 2026/05/24 09:45:13 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	entier = current;
	if (entier == 0)
		write(1, "0", 1);
		write(1, ",", 1);
	current *= 100;
	decimal = current - entier;
	count += ft_putnbr2(decimal);
	return (count);
}
