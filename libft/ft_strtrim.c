/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:40:52 by jait-ame          #+#    #+#             */
/*   Updated: 2026/04/20 16:40:52 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

static int	is_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_strlen(char *str, const char *set)
{
	int	i;
	int	count;
	int	end;

	end = 0;
	count = 0;
	i = 0;
	while (str[end])
		end++;
	end--;
	while (is_set(str[end], set))
		end--;
	while (is_set(str[i], set))
		i++;
	while (str[i] && i <= end)
	{
		count++;
		i++;
	}
	return (count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		start;
	int		end;
	char	*str;

	i = 0;
	start = 0;
	end = ft_strlen((char *)s1, set);
	str = malloc(sizeof(char) * ft_strlen((char *)s1, set) + 1);
	if (!str)
		return (NULL);
	while (is_set(s1[i], set))
		i++;
	while (start < end && s1[i])
	{
		str[start] = s1[i];
		start++;
		i++;
	}
	str[start] = '\0';
	return (str);
}
/*
int main(void)
{
    char *str = ft_strtrim("__Bonne chance__","_");
    printf("%s\n",str);
    return(0);
}
*/
