/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 10:25:55 by edemay            #+#    #+#             */
/*   Updated: 2026/05/23 12:56:28 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
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
}
t_list *ft_lstnew(void *content)
{
	t_list	*s;
	s = malloc(sizeof(*s));
	if (!s)
		return ('\0');
	s->content = content;
	s->next = '\0';
	return (s);
}*/
int	ft_lstsize(t_stack *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*int	main(void)
{
	char list1[] = "a laide";
    char list2[] = "ouille";
    char list3[] = "aie";

    t_list *test = ft_lstnew(list1);
    test->next = ft_lstnew(list2);
	test->next->next = ft_lstnew(list3);
	int j = ft_lstsize(test);
	printf("le taille de la liste est de %d\n", j);
    ft_printlist(test);
    return(0);
}*/
