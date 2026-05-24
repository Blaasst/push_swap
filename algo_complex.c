/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_complex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/20 11:22:52 by edemay            #+#    #+#             */
/*   Updated: 2026/05/24 09:19:28 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*sort_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				tmp = tab[j];
				tab[j] = tab[i];
				tab[i] = tmp;
			}
			j++;
		}
		i++;
	}
	return (tab);
}

void	rank_stack(t_stack **a, int *tab_temp)
{
	int		i;
	int		changed;
	t_stack	*top;

	top = *a;
	i = 0;
	while (top != NULL)
	{
		changed = 0;
		while (!changed)
		{
			if (top->val == tab_temp[i])
			{
				top->rank = i;
				changed = 1;
			}
			i++;
		}
		i = 0;
		top = top->next;
	}
}

void	index(int *tab, t_stack **a, int size)
{
	int	*tab_temp;
	int	i;

	i = 0;
	tab_temp = malloc(sizeof(int) * size);
	if (!tab_temp)
		return ;
	while (i < size)
	{
		tab_temp[i] = tab[i];
		i++;
	}
	tab_temp = sort_tab(tab_temp, size);
	rank_stack(a, tab_temp);
	free(tab_temp);

}

char	*print_binaire(int c)
{
	int		i;
	char	*result;

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
