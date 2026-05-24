/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 19:03:33 by edemay            #+#    #+#             */
/*   Updated: 2026/05/23 13:01:03 by edemay           ###   ########.fr       */
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
size_t	cpy(char *dest, const char *src, size_t size)
{
	int i;
	int j;

	j = size;
	i = 0;
	while (j > 1)
	{
		dest[i] = src[i];
		i++;
		j--;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	return (i);
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
void	ft_lstadd_front(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}
/*int	main(void)
{
	char list1[] = "a laide";
    char list2[] = "ouille";
    char list3[] = "aie";

    t_list *test = ft_lstnew(list1);
    test->next = ft_lstnew(list2);
	t_list **lst = &test;
	ft_lstadd_front(lst, ft_lstnew(list3));
    ft_printlist(test);
    return(0);
}*/
