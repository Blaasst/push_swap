/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 15:46:05 by jait-ame          #+#    #+#             */
/*   Updated: 2026/04/20 15:46:05 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <string.h>

static size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	i;
	int	lensrc;
	int	lendest;

	i = 0;
	if (!dst || !src)
		return (0);
	lendest = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (size <= lendest)
		return (size + lensrc);
	while (src[i] && (i + lendest < size - 1))
	{
		dst[i + lendest] = src[i];
		i++;
	}
	dst[i + lendest] = '\0';
	return (lendest + lensrc);
}
