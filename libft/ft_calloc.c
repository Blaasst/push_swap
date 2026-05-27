/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 12:57:24 by jait-ame          #+#    #+#             */
/*   Updated: 2026/04/20 12:57:24 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>
#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*tab;
	size_t	total_size;

	if (n != 0 && (size > __SIZE_MAX__ / n))
		return (0);
	total_size = n * size;
	tab = malloc(total_size);
	if (!tab)
		return (NULL);
	ft_bzero(tab, total_size);
	return (tab);
}
