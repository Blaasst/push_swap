/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:37:26 by jait-ame          #+#    #+#             */
/*   Updated: 2026/04/20 16:37:26 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				j;
	unsigned char	c1;
	unsigned char	*s1;

	i = 0;
	j = 0;
	c1 = (unsigned char) c;
	s1 = (unsigned char *) s;
	while (s[i])
		i++;
	while (i >= j)
	{
		if (s1[i] == c1)
			return ((unsigned char *)s1 + i);
		i--;
	}
	return (NULL);
}
