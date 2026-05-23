/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blast <blast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 13:38:55 by blast             #+#    #+#             */
/*   Updated: 2026/05/23 18:26:42 by blast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	find_min(t_stack    *a)
{
	int	min;
	int		i;
	int		ret;

	min = a->val;
	i = 0;
	ret = 0;
	while(a != NULL)
	{
		if(a->val < min)
		{
			min = a->val;
			ret = i;
		}
		i++;
		a = a->next;
	}
	return(ret);
}

void	put_top(t_stack	**a, int min)
{
	int size;

	size = ft_lstsize(*a);
	if (min <= size / 2)
	{
		while(min != 0)
		{
			ra(a);
			min--;
		}
	}
	else
	{
		while(size - min != 0)
		{
			rra(a);
			size--;
		}
	}
}

void	last(t_data *data)
{
	if((*data->a)->next->next == NULL)
	{
		if((*data->a)->val > (*data->a)->next->val)
			sa(data);
		return ;
	}
	if((*data->a)->val < (*data->a)->next->val && (*data->a)->next->val < (*data->a)->next->next->val)
		return ;
	else if ((*data->a)->val > (*data->a)->next->val && (*data->a)->next->val > (*data->a)->next->next->val)
		{
			sa(data);
			rra(data);
		}
	else if ((*data->a)->val > (*data->a)->next->val && (*data->a)->next->val < (*data->a)->next->next->val
		&& (*data->a)->val > (*data->a)->next->next->val)
			rra(data);
	else if ((*data->a)->val > (*data->a)->next->val && (*data->a)->next->val < (*data->a)->next->next->val
		&& (*data->a)->val < (*data->a)->next->next->val)
			sa(data);
	else if ((*data->a)->val < (*data->a)->next->val && (*data->a)->next->val > (*data->a)->next->next->val)
		{
			rra(data);
			sa(data);
		}
}

void	simple(t_data *data)
{
	int	min;

	while(ft_lstsize(*data->a) > 3)
	{
		min = find_min(*data->a);
		put_top(data->a, min);
		pb(data);
	}
	last(data);
	while(data->b != NULL)
		pa(data);
}
