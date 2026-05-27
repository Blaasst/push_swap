/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:01:08 by jait-ame          #+#    #+#             */
/*   Updated: 2026/04/20 16:01:08 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (big[i] == '\0' && little[i] == '\0')
		return ((char *)&big[i]);
	else if (big[i] == '\0')
		return ('\0');
	if (len <= 0)
		return (NULL);
	while (big[i] && i < len)
	{
		j = 0;
		while (i + j < len && big[i + j] == little[j])
		{
			if (little[j + 1] == '\0')
				return ((unsigned char *)&big[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
