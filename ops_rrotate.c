/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_rrotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 09:13:42 by edemay            #+#    #+#             */
/*   Updated: 2026/05/24 09:13:44 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*ft_blstlast(t_stack *lst)
{
	while (lst && lst->next && lst->next->next)
		lst = lst->next;
	return (lst);
}

static void	rrotate(t_stack **top)
{
	t_stack	*first;
	t_stack	*before_last;
	t_stack	*last;

	if (*top == NULL)
		return ;
	before_last = ft_blstlast(*top);
	last = ft_lstlast(*top);
	first = *top;
	last->next = first;
	before_last->next = NULL;
	*top = last;
}

void	rra(t_data *data)
{
	t_ops	*operation;

	rrotate(data->a);
	operation = ft_lstnew(8);
	ft_lstadd_back(&(data->ops), operation);
}

void	rrb(t_data *data)
{
	t_ops	*operation;

	rrotate(data->b);
	operation = ft_lstnew(9);
	ft_lstadd_back(&(data->ops), operation);
}

void	rrr(t_data *data)
{
	t_ops	*operation;

	rrotate(data->a);
	rrotate(data->b);
	operation = ft_lstnew(10);
	ft_lstadd_back(&(data->ops), operation);
}
