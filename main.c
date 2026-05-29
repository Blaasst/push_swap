/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/29 09:11:32 by edemay            #+#    #+#             */
/*   Updated: 2026/05/29 09:11:38 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_data		*data;
	t_type		*type;
	char		**args;
	int			is_split;

	if (argc == 1)
		return (0);
	is_split = 0;
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		is_split = 1;
	}
	else
		args = argv;
	data = malloc(sizeof(t_data));
	type = malloc(sizeof(t_type));
	init_structs(data, type);
	if (!run_logic(args, data, type, is_split))
		return (1);
	return (0);
}
