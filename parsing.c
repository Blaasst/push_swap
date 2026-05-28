/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:50:02 by jait-ame          #+#    #+#             */
/*   Updated: 2026/05/28 11:16:37 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*fill_tab(char	**argv, int size, int i)
{
	int	*tab;
	int	j;

	j = 0;
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	while (j < size)
	{
		tab[j] = ft_atoi(argv[i]);
		i++;
		j++;
	}
	return (tab);
}

int	ft_duplicate(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	j = i + 1;
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] == tab[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

t_stack	**fill_stack(t_stack	**top, int *tab, int size)
{
	int		i;
	t_stack	*new;

	i = size - 1;
	while (i >= 0)
	{
		new = ft_lstnew(tab[i]);
		if (!new)
		{
			ft_lstclear(top);
			return (NULL);
		}
		new->next = *top;
		*top = new;
		i--;
	}
	return (top);
}
