/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blast <blast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:17:01 by edemay            #+#    #+#             */
/*   Updated: 2026/05/28 22:05:45 by blast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_putnbr1(unsigned int c)
{
	char	d;
	long	cl;
	int		count;

	count = 0;
	cl = c;
	d = cl % 10 + '0';
	cl = cl / 10;
	count++;
	if (cl > 0)
	{
		count += ft_putnbr1(cl);
	}
	write(2, &d, 1);
	return (count);
}

int	print_unsigned_int(unsigned int n)
{
	unsigned int	current;
	int				count;

	current = n;
	count = ft_putnbr1(current);
	return (count);
}
