#include "push_swap.h"

static t_stack	*ft_blstlast(t_stack *lst)
{
	while (lst && lst->next && lst->next->next)
		lst = lst->next;
	return (lst);
}

static void	rrotate(t_stack **top)
{
	t_stack	*first;
	t_stack	*before_last;
	t_stack	*last;

	if (*top == NULL)
		return ;
	before_last = ft_blstlast(*top);
	last = ft_lstlast(*top);
	first = *top;
	last->next = first;
	before_last->next = NULL;
	*top = last;
}

void	rra(t_stack **a, t_ops **count)
{
	t_ops	*operation;

	rrotate(a);
	operation = ft_lstnew(8);
	ft_lstadd_back(count, operation);
}


void	rrb(t_stack **b, t_ops **count)
{
	t_ops	*operation;

	rrotate(b);
	operation = ft_lstnew(9);
	ft_lstadd_back(count, operation);
}


void	rrr(t_stack **b, t_stack **a, t_ops **count)
{
	t_ops	*operation;

	rrotate(a);
	rrotate(b);
	operation = ft_lstnew(10);
	ft_lstadd_back(count, operation);
}


