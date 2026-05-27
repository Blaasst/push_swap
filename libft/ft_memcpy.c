/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:30:41 by jait-ame          #+#    #+#             */
/*   Updated: 2026/04/20 13:30:41 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	char	*ptr;
	char	*ptr2;
	int		i;

	ptr = dest;
	ptr2 = (void *)src;
	i = 0;
	while (i < n)
	{
		ptr[i] = ptr2[i];
		i++;
	}
	return (dest);
}
