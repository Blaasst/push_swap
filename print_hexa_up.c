/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa_up.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blast <blast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:16:47 by edemay            #+#    #+#             */
/*   Updated: 2026/05/28 22:05:05 by blast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	print_hexa_up(unsigned int n)
{
	char			*hexa_up;
	unsigned int	current;
	int				count;
	char			d;

	hexa_up = "0123456789ABCDEF";
	current = n;
	count = 0;
	d = hexa_up[current % 16];
	count++;
	if (current >= 16)
		count += print_hexa_up(current / 16);
	write(2, &d, 1);
	return (count);
}
