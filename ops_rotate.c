#include "push_swap.h"

static void	rotate(t_stack **top)
{
	t_stack	*first;
	t_stack	*last;

	if(*top == NULL)
		return ;
	last = ft_lstlast(*top);
	first = *top;
	*top = first->next;
	last->next = first;
	first->next = NULL;
}

void	ra(t_stack **a)
{
	rotate(a);
	write(1,"ra\n",3);
}

void	rb(t_stack **b)
{
	rotate(b);
	write(1,"rb\n",3);
}

void	rr(t_stack **b, t_stack **a)
{
	rotate(b);
	rotate(a);
	write(1,"rr\n",3);
}
