/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 10:42:45 by edemay            #+#    #+#             */
/*   Updated: 2026/05/23 13:04:32 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void ft_printlist(t_list *lst)
{
	while (lst)
    {
        printf("le dernier de la liste est : \n%s\n", (char *)lst->content);
        lst = lst->next;
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
// static	int	f_lstsize(t_list *lst)
// {
// 	int	i;

// 	i = 0;
// 	i++;
// 	while (lst)
// 	{
// 		lst = lst->next;
// 		i++;
// 	}
// 	return (i);
// }

t_stack	*ft_lstlast(t_stack *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}
/*int	main(void)
{
	char list1[] = "a laide";
    char list2[] = "ouille";
    char list3[] = "aie";

    t_list *test = ft_lstnew(list1);
    test->next = ft_lstnew(list2);
	test->next->next = ft_lstnew(list3);
	t_list* j = ft_lstlast(test);
	ft_printlist(j);
	free(test);
    return(0);
}*/
