/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_data.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/24 09:03:00 by edemay            #+#    #+#             */
/*   Updated: 2026/05/24 15:43:26 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstclear_data(t_data *lst)
{
	ft_lstclear((lst)->a);
	ft_lstclear((lst)->b);
	ft_lstclear_ops(&(lst)->ops);
}
