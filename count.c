/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blast <blast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 10:15:39 by jait-ame          #+#    #+#             */
/*   Updated: 2026/05/23 15:26:14 by blast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_count(t_ops	**ops, t_count *count)
{
	t_ops	*current;

	current = (*ops);
	while (current != NULL)
	{
		if (current->code == 0)
			count->sa += 1;
		if (current->code == 1)
			count->sb += 1;
		if (current->code == 2)
			count->ss += 1;
		if (current->code == 3)
			count->pa += 1;
		if (current->code == 4)
			count->pb += 1;
		current = current->next;
	}
	count_sub(ops, count);

}

void	count_sub(t_ops	**ops, t_count *count)
{
	t_ops	*current;

	current = (*ops);
	while (current != NULL)
	{
		if (current->code == 5)
			count->ra += 1;
		if (current->code == 6)
			count->rb += 1;
		if (current->code == 7)
			count->rr += 1;
		if (current->code == 8)
			count->rra += 1;
		if (current->code == 9)
			count->rrb += 1;
		if (current->code == 10)
			count->rrr += 1;
		current = current->next;
	}
}

int	count_total(t_ops	**ops, t_count *count)
{
	t_ops	*current;
	int		total;

	current = (*ops);
	total = 0;
	while (current != NULL)
	{
		total++;
		current = current->next;
	}
	return(total);

}
