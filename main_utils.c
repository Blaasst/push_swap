/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 09:11:22 by edemay            #+#    #+#             */
/*   Updated: 2026/05/29 09:38:59 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	choice(char **argv, int argc, t_type *type)
{
	double	dis;

	type->adaptive = 0;
	if (type->type == 4)
	{
		type->adaptive = 1;
		dis = disorder(argv, argc, type);
		if (dis < 0.2)
			type->type = 1;
		else if (dis >= 0.2 && dis < 0.5)
			type->type = 2;
		else if (dis >= 0.5)
			type->type = 3;
	}
}

void	start(t_type *type, int *tab, t_data *data, char **argv)
{
	int	size;
	int	argc;

	argc = ft_argvlen(argv);
	size = ft_lstsize(*(data->a));
	data->ops = NULL;
	if (type->type == 1)
		algo_simple(data);
	else if (type->type == 2)
		algo_medium(data, size, tab);
	else if (type->type == 3)
		algo_complex(data, size, tab);
	ft_print_ops(data->ops);
	if (type->bench == 1)
		benchmark(&data->ops, argv, argc, type);
}

void	ft_end(int *tab, t_data *data, t_type *type)
{
	free(tab);
	ft_lstclear_data(data);
	free(type);
	free(data);
}

void	init_structs(t_data *data, t_type *type)
{
	data->a = malloc(sizeof(t_stack *));
	data->b = malloc(sizeof(t_stack *));
	*(data->a) = NULL;
	*(data->b) = NULL;
	data->ops = NULL;
	type->bench = 0;
	type->start = 1;
}

int	run_logic(char **args, t_data *data, t_type *type, int is_split)
{
	int	*tab;
	int	argc;

	argc = ft_argvlen(args);
	type = flags(args, type, is_split);
	tab = check(argc, args, type->start);
	if (!tab || !fill_stack(data->a, tab, argc - type->start))
	{
		free(tab);
		free(type);
		free(data);
		write (2, "Error\n", 6);
		return (0);
	}
	choice(args, argc, type);
	start(type, tab, data, args);
	free(tab);
	ft_lstclear_data(data);
	free(type);
	free(data);
	if (is_split)
		free(args);
	return (1);
}
