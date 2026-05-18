#include "push_swap.h"
#include "libft.h"

int main(int argc, char ** argv)
{
	int		i;
	int		*tab;
	t_stack	*top;

	i = 1;
	top = NULL;
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
