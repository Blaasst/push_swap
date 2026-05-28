#include "push_swap.h"

t_type	*flags(char **argv, t_type *type)
{
	int	i;

	i = 1;
	type->type = 4;
	while (argv[i])
	{
		if (ft_strcmp(argv[i], "--simple") == 0)
			type->type = 1;
		else if (ft_strcmp(argv[i], "--medium") == 0)
			type->type = 2;
		else if (ft_strcmp(argv[i], "--complex") == 0)
			type->type = 3;
		else if (ft_strcmp(argv[i], "--bench") == 0)
			type->bench = 1;
		if (ft_strncmp(argv[i], "--", 2) != 0)
		{
			type->start = i;
			break ;
		}
		i++;
	}
	return (type);
}

int	*check(int argc, char **argv, int i)
{
	int	start;
	int	*tab;

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
	tab = fill_tab(argv, argc - start, start);
	if (ft_duplicate(tab, argc - start) == 1)
	{
		free(tab);
		write (2, "Error\n", 6);
		return (NULL);
	}
	return (tab);
}
