/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 08:51:46 by edemay            #+#    #+#             */
/*   Updated: 2026/05/24 11:09:28 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft.h"

int	main(int argc, char **argv)
{
	int		*tab;
	t_type	*type;
	t_data	*data;
	t_stack	*top_a;
	t_stack	*top_b;

	top_a = NULL;
	top_b = NULL;
	type = malloc(sizeof(t_type) * 1);
	data = malloc(sizeof(t_data) * 1);
	data->a = &top_a;
	data->b = &top_b;
	data->ops = NULL;
	type->type = 4;
	type->bench = 0;
	type = flags(argc, argv, type);
	tab = check(argc, argv, tab, type->start);

	if (!fill_stack(data->a, tab, argc - type->start))
	{
		free(tab);
		free(type);
		free(data);
		write (2, "Error\n", 6);
		return (1);
	}
	start(type, tab, data, argv);
	free(tab);
	ft_lstclear(data->a);
	free(type);
	free(data);
	return (0);
}

t_type	*flags(int argc, char **argv, t_type *type)
{
	int	i;

	i = 1;
	while (argv[i])
	{
		if (ft_strcmp(argv[i],"--simple") == 0)
			type->type = 1;
		else if (ft_strcmp(argv[i],"--medium") == 0)
			type->type = 2;
		else if (ft_strcmp(argv[i],"--complex") == 0)
			type->type = 3;
		else if (ft_strcmp(argv[i],"--bench") == 0)
			type->bench = 1;
		if (ft_strncmp(argv[i],"--", 2) != 0)
		{
			type->start = i;
			break ;
		}
		i++;
	}
	return (type);
}

int	*check(int argc, char **argv, int *tab, int i)
{
	int	start;

	start = i;
	while (i < argc)
	{
		if (!valid_int(argv[i]))
		{
			write (2, "Error\n", 6);
			return (NULL);
		}
		i++;
	}
	tab = fill_tab(argv, argc - i, start);
	if (!ft_duplicate(tab, argc - i))
	{
		free(tab);
		write (2, "Error\n", 6);
		return (NULL);
	}
	return (tab);
}

void	choice(char **argv, int argc, t_type *type)
{
	double	dis;

	if (type->type == 4)
	{
		dis = disorder(argv, argc, type);
		if (dis < 0.2)
			type->type = 1;
		else if (dis > 0.2 && dis < 0.5)
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
	size = ft_lstsize(data->a);
	data->b = NULL;
	data->ops = NULL;
	if (type->type == 1)
		algo_simple(data);
	else if (type->type == 2)
		algo_medium(data, size, tab);
	else if (type->type == 3)
		algo_complex(data, size, tab);
	if (type->bench == 1)
		benchmark(data->ops, argv, argc, type);

}
