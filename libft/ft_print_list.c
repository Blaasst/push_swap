/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 10:13:16 by edemay            #+#    #+#             */
/*   Updated: 2026/05/24 10:28:12 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_ops(t_ops *ops)
{
	while (ops != NULL)
	{
		cond(ops);
		ops = ops->next;
	}
}

void	cond(t_ops *ops)
{
	if (ops->code == 0)
		write(1, "sa", 2);
	else if (ops->code == 1)
		write(1, "sb", 2);
	else if (ops->code == 2)
		write(1, "ss", 2);
	else if (ops->code == 3)
		write(1, "pa", 2);
	else if (ops->code == 4)
		write(1, "pb", 2);
	else if (ops->code == 5)
		write(1, "ra", 2);
	else if (ops->code == 6)
		write(1, "rb", 2);
	else if (ops->code == 7)
		write(1, "rr", 2);
	else if (ops->code == 8)
		write(1, "rra", 3);
	else if (ops->code == 9)
		write(1, "rrb", 3);
	else if (ops->code == 10)
		write(1, "rrr", 3);
}
