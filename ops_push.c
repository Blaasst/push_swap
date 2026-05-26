/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ops_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 09:14:12 by edemay            #+#    #+#             */
/*   Updated: 2026/05/24 15:39:17 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_data *data)
{
	t_stack	*push;
	t_ops	*operation;

	if (*(data->a) == NULL)
		return ;
	push = *(data->a);
	*(data->a) = push->next;
	ft_lstadd_front(data->b, push);
	operation = ft_lstnew_ops(4);
	ft_lstadd_back_ops(&(data->ops), operation);
}

void	pa(t_data *data)
{
	t_stack	*push;
	t_ops	*operation;

	if (*(data->b) == NULL)
		return ;
	push = *(data->b);
	*(data->b) = push->next;
	ft_lstadd_front(data->a, push);
	operation = ft_lstnew_ops(3);
	ft_lstadd_back_ops(&(data->ops), operation);
}
