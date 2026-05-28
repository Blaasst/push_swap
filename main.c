#include "push_swap.h"

#include "push_swap.h"

int	main(int argc, char **argv)
{
	int		*tab;
	t_type	*type;
	t_data	*data;
	t_stack	*top_a;
	t_stack	*top_b;

	if (argc == 1)
		return (0);
	top_a = NULL;
	top_b = NULL;
	type = malloc(sizeof(t_type));
	data = malloc(sizeof(t_data));
	// Initialisation des pointeurs (ceux que tu avais dans ton ancien main)
	ft_alloc(data, type, top_a, top_b);

	type = flags(argv, type);
	tab = check(argc, argv, type->start);
	if (tab == NULL)
	{
		free(type);
		free(data);
		return (1);
	}
	if (!fill_stack(data->a, tab, argc - type->start))
	{
		ft_end(tab, data, type);
		write(2, "Error\n", 6);
		return (1);
	}
	choice(argv, argc, type);
	start(type, tab, data, argv);
	ft_end(tab, data, type);
	return (0);
}
