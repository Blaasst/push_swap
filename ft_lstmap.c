/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 18:20:32 by edemay            #+#    #+#             */
/*   Updated: 2026/05/23 13:11:17 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*void delete(void *content)
{
	free(content);
}
void ft_printlist(t_list *lst)
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
void   *upper(void *content)
{
    int i;
    char *str;

    str = (char *)content;
    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
        i++;
    }
	return(str);
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
}*/
static	t_stack	*lstnew(void *val)
{
	t_stack	*s;

	s = malloc(sizeof(*s));
	if (!s)
		return ('\0');
	s->val = val;
	s->rank = '\0';
	s->binaire = '\0';
	s->next = '\0';
	return (s);
}

static void	lstclear(t_stack **lst, void (*del)(void *))
{
	t_stack	*temp;

	while (*lst)
	{
		temp = *lst;
		*lst = (*lst)->next;
		del(temp->val);
		del(temp->rank);
		del(temp->binaire);
		free(temp);
	}
}

t_stack	*ft_lstmap(t_stack *lst, void *(*f)(void *), void (*del)(void *))
{
	t_stack	*s;
	t_stack	*start;

	start = NULL;
	while (lst)
	{
		s = lstnew(f(lst->val));
		if (!s)
		{
			del(s->next);
			lstclear(&start, del);
			return ('\0');
		}
		ft_lstadd_back(&start, s);
		lst = lst->next;
	}
	return (start);
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

    t_list *test = lstnew(list1);
    test->next = lstnew(list2);
    test->next->next = lstnew(list3);
	ft_printlist(test);
	printf("|MAP|\n");
	ft_printlist(ft_lstmap(test, upper, delete));
	printf("iterate complete\n");
	free(test);
}*/
