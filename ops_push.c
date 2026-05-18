#include "push_swap.h"

void	pb(t_stack **a, t_stack **b)
{
	t_stack	*push;

	if(*a == NULL)
		return ;
	push = *a;
	*a = push->next;
	ft_lstadd_front(b,push);
	write(1,"pb\n",3);
}

void	pa(t_stack **a, t_stack **b)
{
	t_stack	*push;

	if(*b == NULL)
		return ;
	push = *b;
	*b = push->next;
	ft_lstadd_front(a,push);
	write(1,"pa\n",3);
}
