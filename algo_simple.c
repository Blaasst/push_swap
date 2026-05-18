/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_simple.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blast <blast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 13:38:55 by blast             #+#    #+#             */
/*   Updated: 2026/05/18 15:09:10 by blast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


int	find_min(t_stack	*a)
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

void	last(t_stack **a)
{
	if((*a)->next->next == NULL)
	{
		if((*a)->val > (*a)->next->val)
			sa(a);
		return ;
	}
	if((*a)->val < (*a)->next->val && (*a)->next->val < (*a)->next->next->val)
		return ;
	else if ((*a)->val > (*a)->next->val && (*a)->next->val > (*a)->next->next->val)
		{
			sa(a);
			rra(a);
		}
	else if ((*a)->val > (*a)->next->val && (*a)->next->val < (*a)->next->next->val
		&& (*a)->val > (*a)->next->next->val)
			rra(a);
	else if ((*a)->val > (*a)->next->val && (*a)->next->val < (*a)->next->next->val
		&& (*a)->val < (*a)->next->next->val)
			sa(a);
	else if ((*a)->val < (*a)->next->val && (*a)->next->val > (*a)->next->next->val)
		{
			rra(a);
			sa(a);
		}
}

void	simple(t_stack **a, t_stack **b)
{
	int	min;

	while(ft_lstsize(*a) > 3)
	{
		min = find_min(*a);
		put_top(a, min);
		pb(a, b);
	}
	last(a);
	while(*b != NULL)
		pa(a,b);
}
