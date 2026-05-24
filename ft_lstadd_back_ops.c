/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_ops.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 13:22:20 by edemay            #+#    #+#             */
/*   Updated: 2026/05/23 13:31:32 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back_ops(t_ops **lst, t_ops *new)
{
	t_ops	*end;

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
