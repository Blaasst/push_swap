/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edemay <edemay@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 19:29:59 by edemay            #+#    #+#             */
/*   Updated: 2026/05/29 08:59:14 by edemay           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_count_words(char *set, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (set[j])
	{
		if (set[j] != c)
		{
			i++;
			while (set[j] != c && set[j])
				j++;
		}
		else
			j++;
	}
	return (i);
}

static int	ft_count_length(char *set, int i, char c)
{
	int	j;

	j = 0;
	while (set[i] != c && set[i])
	{
		i++;
		j++;
	}
	return (j);
}

static char	**ft_cpy(char *s, char c, char **result)
{
	int	k;
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] >= 32 && s[i] < 127)
		{
			k = 0;
			result[j] = malloc(sizeof(char)
					* ft_count_length(s, i, c) + 1);
			if (!result)
				return ('\0');
			while (s[i] && s[i] != c)
				result[j][k++] = s[i++];
			result[j][k] = '\0';
			j++;
		}
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;

	words = ft_count_words((char *)s, c);
	result = malloc(sizeof(char *) * (words + 1));
	if (!result)
		return ('\0');
	result = ft_cpy((char *)s, c, result);
	if (!result)
	{
		free(result);
		return ('\0');
	}
	return (result);
}
// int main() {

//     const char * original = "chinimala";
// 	char original2 = ' ';
// 	int i = 0;

//     // On duplique au plus 12 caractères de la chaîne initiale.
//     char **copy = ft_split( original, original2);

//     // On affiche la chaîne finale
// 	while (copy[i])
// 	{
//     	printf( "%s\n", copy[i]);
// 		i++;
// 	}

//     // Sans oublier de libérer l'espace mémoire au final.
//     free( copy );
// }
