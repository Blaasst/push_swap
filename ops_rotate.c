#include "push_swap.h"

static void	rotate(t_stack **top)
{
	t_stack	*first;
	t_stack	*last;

	if (*top == NULL)
		return ;
	last = ft_lstlast(*top);
	first = *top;
	*top = first->next;
	last->next = first;
	first->next = NULL;
}

void	ra(t_stack **a, t_ops **count)
{
	t_ops	*operation;

	rotate(a);
	operation = ft_lstnew(5);
	ft_lstadd_back(count, operation);
}

void	rb(t_stack **b, t_ops **count)
{
	t_ops	*operation;

	rotate(b);
	operation = ft_lstnew(6);
	ft_lstadd_back(count, operation);
}

void	rr(t_stack **b, t_stack **a, t_ops **count)
{
	t_ops	*operation;

	rotate(b);
	rotate(a);
	operation = ft_lstnew(7);
	ft_lstadd_back(count, operation);
}
