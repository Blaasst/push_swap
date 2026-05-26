/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 17:03:44 by edemay            #+#    #+#             */
/*   Updated: 2026/05/24 15:41:31 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*void ft_printlist(t_list *lst)
{
    int i;
    i = 0;

    while (lst)
    {
        printf("element %d: %s\n", i, (char *)lst->content);
        lst = lst->next;
        i++;
    }
}*/
t_stack	*ft_lstnew(int value)
{
	t_stack	*s;

	s = malloc(sizeof(*s));
	if (!s)
		return ('\0');
	s->val = value;
	s->rank = '\0';
	s->binaire = '\0';
	s->next = '\0';
	return (s);
}
/*int	main(void)
{
	char list1[] = "a laide";
    char list2[] = "ouille";
    char list3[] = "aie";

    t_list *test = ft_lstnew(list1);
    test->next = ft_lstnew(list2);
    test->next->next = ft_lstnew(list3);
    ft_printlist(test);
    return(0);
}*/
