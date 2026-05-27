/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blast <blast@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 14:55:33 by jait-ame          #+#    #+#             */
/*   Updated: 2026/05/17 17:38:53 by blast            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "libft.h"

void	ft_lstclear(t_list **lst)
{
	t_list	*f;
	t_list	*tmp;

	f = *lst;
	while (f != NULL)
	{
		tmp = f->next;
			free(f);
		f = tmp;
	}
	*lst = NULL;
}
