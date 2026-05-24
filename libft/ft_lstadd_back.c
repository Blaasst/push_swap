/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 10:53:14 by edemay            #+#    #+#             */
/*   Updated: 2026/05/23 12:56:03 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void ft_printlist(t_list *lst)
// {
//     int i;
//     i = 0;

//     while (lst)
//     {
//         printf("element %d: %s\n", i, (char *)lst->content);
//         lst = lst->next;
//         i++;
//     }
// }
// t_list *ft_lstnew(void *content)
// {
// 	t_list	*s;
// 	s = malloc(sizeof(*s));
// 	if (!s)
// 		return ('\0');
// 	s->content = content;
// 	s->next = '\0';
// 	return (s);
// }
void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*end;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	end = *lst;
	while (end->next)
		end = end->next;
	end->next = NULL;
	end->next = new;
}
// int	main(void)
// {
// 	char list1[] = "98";
// 	char list2[] = "85";
// 	char list3[] = "58";

//     t_list *test = ft_lstnew(list1);
//     test->next = ft_lstnew(list2);
// 	test = NULL;
// 	ft_lstadd_back(&test, ft_lstnew(list3));
// 	ft_printlist(test);
// 	free(test);
//     return(0);
// }
