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

	if(*top == NULL)
		return ;
	before_last = ft_blstlast(*top);
	last = ft_lstlast(*top);
	first = *top;
	last->next = first;
	before_last->next = NULL;
	*top = last;
}

void	rra(t_stack **a)
{
	rrotate(a);
	write(1,"rra\n",4);
}

void	rrb(t_stack **b)
{
	rrotate(b);
	write(1,"rrb\n",4);
}

void	rrr(t_stack **b, t_stack **a)
{
	rrotate(b);
	rrotate(a);
	write(1,"rrr\n",4);
}


