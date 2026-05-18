#include "push_swap.h"

int	*sort_tab(int *tab)
{
	int i;
	int j;
	int	tmp;
	while(tab[i])
	{
		j = i + 1;
		while(tab[j])
		{
			if(tab[j] < tab[i])
			{
				tmp = tab[j];
				tab[j] = tab[i];
				tab[i] = tmp;
			}
			j++;
		}
		i++;
	}
	return(tab);
}



void	index(int *tab, t_stack **a, int size)
{
	int	*tab_temp;
	int	i;

	while(i < size)
	{
		tab_temp[i] = tab[i];
		i++;
	}
	tab_temp = sort_tab(tab_temp);


}




