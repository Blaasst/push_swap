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

void	ra(t_data *data)
{
	t_ops	*operation;

	rotate(data->a);
	operation = ft_lstnew(5);
	ft_lstadd_back(&(data->ops), operation);
}

void	rb(t_data *data)
{
	t_ops	*operation;

	rotate(data->b);
	operation = ft_lstnew(6);
	ft_lstadd_back(&(data->ops), operation);
}

void	rr(t_data *data)
{
	t_ops	*operation;

	rotate(data->b);
	rotate(data->a);
	operation = ft_lstnew(7);
	ft_lstadd_back(&(data->ops), operation);
}
