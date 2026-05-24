/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:28:21 by edemay            #+#    #+#             */
/*   Updated: 2026/05/24 09:07:42 by edemay           ###   ########.fr       */
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
size_t cpy(char *dest, const char *src, size_t size)
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
void	ft_lstclear(t_stack **lst)
{
	t_stack	*temp;

	while (*lst)
	{
		temp = *lst;
		*lst = (*lst)->next;
		free(temp->val);
		free(temp->rank);
		free(temp->binaire);
		free(temp);
	}
}
/*int	main(void)
{
	char *list1 = malloc(sizeof(char) * 8);
	if (!list1)
		return('\0');
	cpy(list1,"a laide", 8);
    char *list2 = malloc(sizeof(char) * 7);
	if (!list2)
		return('\0');
	cpy(list2,"ouille", 7);
    char *list3 = malloc(sizeof(char) * 4);
	if (!list3)
		return('\0');
	cpy(list3,"aie", 4);

    t_list *test = ft_lstnew(list1);
    test->next = ft_lstnew(list2);
    test->next->next = ft_lstnew(list3);
	ft_printlist(test);
	ft_lstclear(&test->next, delete);
	ft_printlist(test);
	printf("delete complete");
	free(test);
}*/
