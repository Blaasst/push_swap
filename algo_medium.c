/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_medium.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 09:10:46 by edemay            #+#    #+#             */
/*   Updated: 2026/05/28 11:14:50 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	finish(t_data *data)
{
	int	max;

	while ((*data->b) != NULL)
	{
		max = find_max(*data->b);
		put_top_b(data, max);
		pa(data);
	}
}

void	algo_medium(t_data *data, int size, int *tab)
{
	int	high;
	int	low;

	low = 0;
	high = (size * 0.05) + 10;
	indexer(tab, data->a, size);
	while ((*data->a) != NULL)
	{
		if ((*data->a)->rank <= high)
		{
			pb(data);
			if (((*data->b)->rank) < low)
				rb(data);
			low++;
			high++;
		}
		else
			ra(data);
	}
	finish(data);
}
