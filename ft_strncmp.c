/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 13:37:12 by edemay            #+#    #+#             */
/*   Updated: 2026/05/24 15:22:09 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char *) s1;
	ptr2 = (unsigned char *) s2;
	i = 0;
	while (i != n)
	{
		if (ptr[i] < ptr2[i])
			return (ptr[i] - ptr2[i]);
		if (ptr[i] > ptr2[i])
			return (ptr[i] - ptr2[i]);
		i++;
	}
	return (0);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t			i;
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char *) s1;
	ptr2 = (unsigned char *) s2;
	i = 0;
	while (ptr[i] && ptr2[i])
	{
		if (ptr[i] < ptr2[i])
			return (ptr[i] - ptr2[i]);
		if (ptr[i] > ptr2[i])
			return (ptr[i] - ptr2[i]);
		i++;
	}
	return (0);
}
