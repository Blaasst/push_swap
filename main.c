#include "push_swap.h"
#include "libft.h"

int main(int argc, char ** argv)
{
	t_stack	*top;
	int		*tab;

	top = NULL;
	check(argc, argv, tab);
	if(!fill_stack(&top, tab, argc - 1))
	{
		free(tab);
		write(2,"Error\n", 6);
		return(1);
	}
	free(tab);
	ft_lstclear(&top);
	return(0);
}

int *check(int argc, char ** argv, int *tab)
 {
	int i;
	while (i < argc)
	{
		if(!valid_int(argv[i]))
		{
			write(2,"Error\n", 6);
			return(1);
		}
		i++;
	}
	tab = fill_tab(argv, argc - 1);
	if(!ft_duplicate(tab, argc - 1))
	{
		free(tab);
		write(2,"Error\n", 6);
		return(1);
	}
	return(tab);
 }
