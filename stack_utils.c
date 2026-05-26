/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 10:54:40 by edemay            #+#    #+#             */
/*   Updated: 2026/05/24 15:18:35 by edemay           ###   ########.fr       */
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

void	indexer(int *tab, t_stack **a, int size)
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
