/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:45:40 by jait-ame          #+#    #+#             */
/*   Updated: 2026/04/28 14:57:47 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

static int	count_words(const char *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			count++;
		i++;
	}
	return (count + 1);
}

static int	ft_strlen(const char *str, char c, int i)
{
	int	count;

	count = 0;
	while (str[i] != c && str[i])
	{
		i++;
		count++;
	}
	return (count + 1);
}

static void	free_all(char **str, int i)
{
	while (i >= 0)
	{
		free(str[i]);
		i--;
	}
	free(str);
}

static char	**try(int i, char **tab, char const *s, char c)
{
	int	j;
	int	k;

	j = 0;
	k = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			tab[j] = malloc(sizeof(char) * ft_strlen(s, c, i));
			if (!tab[j])
			{
				free_all (tab, j);
				return (NULL);
			}
			while (s[i] && s[i] != c)
				tab[j][k++] = s[i++];
			tab[j][k] = '\0';
			j++;
			k = 0;
		}
		else
			i++;
	}
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**tab;

	i = 0;
	tab = malloc(sizeof(char *) * count_words(s, c));
	if (!tab)
		return (NULL);
	try(i, tab, s, c);
	if (!tab)
		return (NULL);
	return (tab);
}
