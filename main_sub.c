/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sub.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 11:36:15 by jait-ame          #+#    #+#             */
/*   Updated: 2026/05/28 12:39:27 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_alloc(t_data *data, t_type *type, t_stack *top_a, t_stack *top_b)
{
	data->a = &top_a;
	data->b = &top_b;
	data->ops = NULL;
	type->bench = 0;
	type->start = 1;
}

void	ft_free(t_data *data, t_type *type, int *tab)
{
	free(data);
	free(type);
	free(tab);
	write(2, "Error\n", 6);
}

void	ft_end(int *tab, t_data *data, t_type *type)
{
	free(tab);
	ft_lstclear_data(data);
	free(type);
	free(data);
}
