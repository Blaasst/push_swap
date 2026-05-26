/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_ops.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 13:26:20 by edemay            #+#    #+#             */
/*   Updated: 2026/05/24 15:36:30 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_ops	*ft_lstnew_ops(int value)
{
	t_ops	*s;

	s = malloc(sizeof(*s));
	if (!s)
		return ('\0');
	s->code = value;
	s->next = '\0';
	return (s);
}
