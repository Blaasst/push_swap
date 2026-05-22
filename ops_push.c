#include "push_swap.h"

void	pb(t_stack **a, t_stack **b,t_ops	**count)
{
	t_stack	*push;
	t_ops	*operation;

	if (*a == NULL)
		return ;
	push = *a;
	*a = push->next;
	ft_lstadd_front(b,push);
	operation = ft_lstnew(4);
	ft_lstadd_back(count, operation);
}

void	pa(t_stack **a, t_stack **b, t_ops	**count)
{
	t_stack	*push;
	t_ops	*operation;

	if (*b == NULL)
		return ;
	push = *b;
	*b = push->next;
	ft_lstadd_front(a, push);
	operation = ft_lstnew(3);
	ft_lstadd_back(count, operation);
}
