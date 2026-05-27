/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blast <blast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 10:13:16 by edemay            #+#    #+#             */
/*   Updated: 2026/05/27 15:53:46 by blast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cond(t_ops *ops)
{
	if (ops->code == 0)
		write(1, "sa\n", 3);
	else if (ops->code == 1)
		write(1, "sb\n", 3);
	else if (ops->code == 2)
		write(1, "ss\n", 3);
	else if (ops->code == 3)
		write(1, "pa\n", 3);
	else if (ops->code == 4)
		write(1, "pb\n", 3);
	else if (ops->code == 5)
		write(1, "ra\n", 3);
	else if (ops->code == 6)
		write(1, "rb\n", 3);
	else if (ops->code == 7)
		write(1, "rr\n", 3);
	else if (ops->code == 8)
		write(1, "rra\n", 4);
	else if (ops->code == 9)
		write(1, "rrb\n", 4);
	else if (ops->code == 10)
		write(1, "rrr\n", 4);
}

void	ft_print_ops(t_ops *ops)
{
	while (ops != NULL)
	{
		cond(ops);
		ops = ops->next;
	}
}
