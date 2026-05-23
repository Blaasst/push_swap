#include "push_swap.h"

int	*sort_tab(int *tab, int size)
{
	int i;
	int j;
	int	tmp;

	i = 0;
	j = 0;
	while(i < size)
	{
		j = i + 1;
		while(j < size)
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

void	rank_stack(t_stack **a, int *tab_temp)
{
	int i;
	int	changed;
	t_stack *top;

	top = *a;
	i = 0;
	while(top != NULL)
	{
		changed = 0;
		while(!changed)
		{
			if(top->val == tab_temp[i])
			{
				top->rank = i;
				changed = 1;
			}
			i++;
		}
		i = 0;
		top = top->next;
	}
}


void	index(int *tab, t_stack **a, int size)
{
	int	*tab_temp;
	int	i;

	i = 0;
	tab_temp = malloc(sizeof(int) * size);
	if(!tab_temp)
		return ;
	while(i < size)
	{
		tab_temp[i] = tab[i];
		i++;
	}
	tab_temp = sort_tab(tab_temp, size);
	rank_stack(a, tab_temp);
	free(tab_temp);

}

void	finish(t_data *data)
{
	int max;

	while((*data->b) != NULL)
	{
		max = find_max(*data->b);
		put_top_b(data->b, max);
		pa(data);
	}
}

void	medium(t_data *data, int size, int *tab)
{
	int high;
	int low;

	low = 0;
	high = (size * 0.05) + 10;
	index(tab, data->a, size);
	while((data->a) != NULL)
	{
		if((*data->a)->rank <= high)
		{
			pb(data);
			if(((*data->b)->rank) < low)
				rb(data->b);
			low++;
			high++;
		}
		else
			ra(data);
	}
	finish(data);
}




