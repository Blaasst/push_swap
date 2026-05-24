/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_complex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:22:52 by edemay            #+#    #+#             */
/*   Updated: 2026/05/24 11:13:37 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*print_binaire(int c)
{
	int		i;
	char	*result;

	i = 0;
	result = malloc(sizeof(char) * 10);
	while (c != 0)
	{
		result[i++] += c % 2;
		c /= 2;
	}
	return (result);
}

void	algo_complex(t_data *data, int size, int *tab)
{
	int		stop;
	t_stack	*first;

	first = (*data->a);
	stop = str_len(print_binaire(lst_size() - 1));
	while ((*data->a)->next != NULL)
	{
		(*data->a)->binaire = print_binaire((*data->a)->rank);
		(*data->a) = (*data->a)->next;
	}
	while (stop >= 0)
	{
		(*data->a) = first;
		while ((*data->a)->next != NULL)
		{
			if ((*data->a)->binaire[stop] == 0)
				pb(data);
			else
				ra(data);
			(*data->a) = (*data->a)->next;
		}
		while ((*data->b) != NULL)
			pa(data);
		stop--;
	}
}
