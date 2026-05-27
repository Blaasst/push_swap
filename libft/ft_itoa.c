/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:03:36 by jait-ame          #+#    #+#             */
/*   Updated: 2026/04/20 13:03:36 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>

static int	digit(long n)
{
	int	c;

	c = 0;
	if (n <= 0)
	{
		c = 1;
		n = -n;
	}
	while (n > 0)
	{
		n /= 10;
		c++;
	}
	return (c);
}

static char	*print_number(char *str, long n, int i, int negative)
{
	while (n > 0)
	{
		str[i] = n % 10 + 48;
		n /= 10;
		i--;
	}
	if (negative)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	int		negative;
	int		i;
	char	*str;
	long	nb;

	nb = n;
	negative = 0;
	i = 0;
	str = malloc(sizeof(char) * (digit(nb) + 1));
	if (!str)
		return (NULL);
	if (nb == 0)
		str[0] = '0';
	while (i < digit(nb))
		i++;
	str[i] = '\0';
	if (nb < 0)
	{
		negative = 1;
		nb = -nb;
	}
	i--;
	print_number (str, nb, i, negative);
	return (str);
}
/*
int main(void)
{

    char *i = ft_itoa(0);

    printf("%s\n", i);
}*/
