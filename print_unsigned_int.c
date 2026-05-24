/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_int.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:17:01 by edemay            #+#    #+#             */
/*   Updated: 2026/05/23 13:54:50 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	write(1, &d, 1);
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
