/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_complex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:22:52 by edemay            #+#    #+#             */
/*   Updated: 2026/05/24 12:51:18 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	count_binaire(int c)
{
	int		i;
	int		temp;

	temp = c;
	i = 0;
	while (temp != 0)
	{
		temp /= 2;
		i++;
	}
	return (i);
}

int	*print_binaire(int c, int stop)
{
	int		j;
	int		*result;

	j = stop;
	result = malloc(sizeof(int) * (stop + 1));
	while (j >= 0)
	{
		result[j] = c % 2;
		j--;
		c /= 2;
	}
	return (result);
}

void	algo_complex(t_data *data, int size, int *tab)
{
	int		stop;
	t_stack	**first;

	first = (data->a);
	index(tab, data->a, size);
	stop = count_binaire(size - 1);
	while ((*data->a) != NULL)
	{
		(*data->a)->binaire = print_binaire((*data->a)->rank, stop);
		(*data->a) = (*data->a)->next;
	}
	(*data->a) = *first;
	while (stop >= 0)
	{
		size = (ft_lstsize(*data->a));
		while (size-- != 0)
		{
			if ((*data->a)->binaire[stop] == 0)
				pb(data);
			else
				ra(data);
		}
		while ((*data->b) != NULL)
			pa(data);
		stop--;
	}
}
