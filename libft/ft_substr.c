/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 17:11:58 by jait-ame          #+#    #+#             */
/*   Updated: 2026/04/20 17:11:58 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*nstr;

	if (!s)
		return (0);
	s_len = ft_strlen((char *)s);
	i = 0;
	if (start >= s_len)
		return (ft_strdup (""));
	if (len > s_len - start)
		len = s_len - start;
	nstr = malloc(sizeof(char) * len + 1);
	if (!nstr)
		return (NULL);
	while (s[start + i] && i < len)
	{
		nstr[i] = s[start + i];
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}
/*
int main(void)
{
    char *str = ft_substr("0123456", 1, 5);
    printf("%s\n",str);
    return(0);
}
	*/
