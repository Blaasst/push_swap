/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:16:54 by edemay            #+#    #+#             */
/*   Updated: 2026/05/23 13:34:32 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	print_hexa_l(long long unsigned n)
{
	char			*hexa_low;
	int				count;
	char			d;

	hexa_low = "0123456789abcdef";
	count = 0;
	d = hexa_low[n % 16];
	count++;
	if (n >= 16)
		count += print_hexa_l(n / 16);
	write(1, &d, 1);
	return (count);
}

int	print_pointer(long long unsigned n)
{
	int		count;

	count = 2;
	if (!n)
		return (print_nil());
	write(1, "0x", 2);
	count += print_hexa_l((long long unsigned)n);
	return (count);
}
