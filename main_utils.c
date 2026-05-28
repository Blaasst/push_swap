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
void	ft_alloc(t_data *data, t_type *type, t_stack *top_a, t_stack *top_b)
{
	data->a = &top_a;
	data->b = &top_b;
	data->ops = NULL;
	type->bench = 0;
	type->start = 1;
}
