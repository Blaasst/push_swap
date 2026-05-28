/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blast <blast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 15:53:39 by edemay            #+#    #+#             */
/*   Updated: 2026/05/28 23:04:35 by blast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	prnt(const char *sentence, int i, va_list string, int count)
{
	if (sentence[i] == 'c')
		count += print_char(va_arg(string, int));
	else if (sentence[i] == 's')
		count += print_string(va_arg(string, char *));
	else if (sentence[i] == 'p')
		count += print_pointer(va_arg(string, long long unsigned));
	else if (sentence[i] == 'd' || sentence[i] == 'i')
		count += print_decimal(va_arg(string, int));
	else if (sentence[i] == 'u')
		count += print_unsigned_int(va_arg(string, unsigned int));
	else if (sentence[i] == 'x')
		count += print_hexa_low(va_arg(string, unsigned int));
	else if (sentence[i] == 'l')
		count += print_double(va_arg(string, double));
	else if (sentence[i] == 'X')
		count += print_hexa_up(va_arg(string, unsigned int));
	else if (sentence[i] == '%')
	{
		write(2, "%", 1);
		count++;
	}
	return (count);
}

int	ft_printf(const char *sentence, ...)
{
	va_list	string;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(string, sentence);
	while (sentence[i])
	{
		if (sentence[i] == '%')
		{
			i++;
			count = prnt(sentence, i, string, count);
		}
		else
		{
			write(2, &sentence[i], 1);
			count++;
		}
		i++;
	}
	return (count);
}
