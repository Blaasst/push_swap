/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 13:28:50 by edemay            #+#    #+#             */
/*   Updated: 2026/05/23 13:02:36 by edemay           ###   ########.fr       */
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
}
void delete(void *content)
{
	free(content);
}*/
void	ft_lstdelone(t_stack *lst, void (*del)(void *))
{
	del(lst->val);
	del(lst->rank);
	del(lst->binaire);
	free(lst);
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
	ft_lstdelone(test->next, delete);
	printf("delete complete");
	ft_printlist(test);
	free(test);
}*/
