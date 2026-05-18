/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blast <blast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 13:50:02 by jait-ame          #+#    #+#             */
/*   Updated: 2026/05/17 17:45:59 by blast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stddef.h>
#include "push_swap.h"
#include "libft.h"


int	*fill_tab(char	**argv, int size)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc(sizeof(int) * size);
	if (!tab)
		return (NULL);
	while (i < size)
	{
		tab[i] = ft_atoi(argv[i]);
		i++;
	}
	return (tab);
}

int	ft_duplicate(int *tab, int size)
{
	int	i;
	int	j;

	j = 0;
	i = j + 1;
	while (j < size)
	{
		while (i < size)
		{
			if (tab[i] == tab[j])
			{
				free(tab);
				return (NULL);
			}
			i++;
		}
		j++;
		i = j + 1;
	}
	return (1);
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
			ft_lstclear(*top);
			free(tab);
			return (NULL);
		}
		new->next = *top;
		*top = new;
		i--;
	}
	return (top);
}




