#include "push_swap.h"

int	find_max(t_stack	*b)
{
	int	max;
	int		i;
	int		ret;

	max = b->val;
	i = 0;
	ret = 0;
	while(b != NULL)
	{
		if(b->val > max)
		{
			max = b->val;
			ret = i;
		}
		i++;
		b = b->next;
	}
	return(ret);
}

void	put_top_b(t_stack	**b, int max)
{
	int size;
	int dist;

	size = ft_lstsize(*b);
	dist = size - max;
	if (max <= size / 2)
	{
		while(max != 0)
		{
			rb(b);
			max--;
		}
	}
	else
	{
		while(dist != 0)
		{
			rrb(b);
			dist--;
		}
	}
}
