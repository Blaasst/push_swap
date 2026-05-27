/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 14:01:51 by jait-ame          #+#    #+#             */
/*   Updated: 2026/04/20 14:01:51 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	c1;
	unsigned char	*s1;

	c1 = (unsigned char) c;
	s1 = (unsigned char *) s;
	i = 0;
	while (s1[i])
	{
		if (s1[i] == c1)
			return ((unsigned char *)s1 + i);
		i++;
	}
	if (s1[i] == c1)
		return ((unsigned char *)s1 + i);
	return (NULL);
}
