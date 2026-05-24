/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 11:16:57 by edemay            #+#    #+#             */
/*   Updated: 2026/05/23 13:34:38 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_string(char *n)
{
	int		i;
	int		count;

	count = 0;
	i = 0;
	if (!n)
		return (print_null());
	while (n[i])
	{
		write(1, &n[i], 1);
		i++;
		count++;
	}
	return (count);
}
