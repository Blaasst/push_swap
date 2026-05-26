/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_swap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 09:13:53 by edemay            #+#    #+#             */
/*   Updated: 2026/05/24 15:39:56 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(t_stack **top)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*tmp;

	if (*top == NULL || (*top)->next == NULL)
		return ;
	first = *top;
	second = first->next;
	tmp = second->next;
	second->next = first;
	first->next = tmp;
	*top = second;
}

void	sa(t_data *data)
{
	t_ops	*operation;

	ft_swap(data->a);
	operation = ft_lstnew_ops(0);
	ft_lstadd_back_ops(&(data->ops), operation);
}

void	sb(t_data *data)
{
	t_ops	*operation;

	ft_swap(data->b);
	operation = ft_lstnew_ops(1);
	ft_lstadd_back_ops(&(data->ops), operation);
}

void	ss(t_data *data)
{
	t_ops	*operation;

	ft_swap(data->b);
	ft_swap(data->a);
	operation = ft_lstnew_ops(2);
	ft_lstadd_back_ops(&(data->ops), operation);
}
