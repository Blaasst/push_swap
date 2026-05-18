#include "push_swap.h"


static void	ft_swap(t_stack **top)
{
	t_stack	*first;
	t_stack	*second;
	t_stack	*tmp;
	if (*top == NULL || (*top)->next == NULL)
		return ;
	first = *top;
	second = first->next;
	tmp = second->next;
	second->next = first;
	first->next = tmp;
	*top = second;
}

void	sa(t_stack **a)
{
	ft_swap(a);
	write(1,"sa\n",3);
}

void	sb(t_stack **b)
{
	ft_swap(b);
	write(1,"sb\n",3);
}

void	ss(t_stack **b, t_stack **a)
{
	ft_swap(b);
	ft_swap(a);
	write(1,"ss\n",3);
}
