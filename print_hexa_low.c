/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa_low.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:16:43 by edemay            #+#    #+#             */
/*   Updated: 2026/05/24 15:08:44 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	print_hexa_low(unsigned int n)
{
	char			*hexa_low;
	unsigned int	current;
	int				count;
	char			d;

	hexa_low = "0123456789abcdef";
	current = n;
	count = 0;
	d = hexa_low[current % 16];
	count++;
	if (current >= 16)
		count += print_hexa_low(current / 16);
	write(1, &d, 1);
	return (count);
}
