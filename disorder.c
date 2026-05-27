/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   disorder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blast <blast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 10:19:47 by jait-ame          #+#    #+#             */
/*   Updated: 2026/05/27 14:24:20 by blast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

double	disorder(char **argv, int argc, t_type *type)
{
	int		i;
	int		j;
	double	total_pairs;
	double	mistakes;
	int		*tab;

	tab = fill_tab(argv,  argc - type->start, type->start);
	i = 0;
	j = i + 1;
	mistakes = 0;
	total_pairs = 0;
	while (i <  argc - type->start)
	{
		while (j <  argc - type->start)
		{
			if (tab[i] > tab[j])
				mistakes += 1;
			total_pairs += 1;
			j++;
		}
		i++;
		j = i + 1;
	}
	free(tab);
	return (mistakes / total_pairs);
}
