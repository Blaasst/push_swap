/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:43:00 by jait-ame          #+#    #+#             */
/*   Updated: 2026/04/26 10:03:42 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	char	c;
	long	nbl;

	nbl = n;
	if (nbl < 0)
	{
		write (fd, "-", 1);
		nbl = -nbl;
	}
	c = nbl % 10 + 48;
	nbl /= 10;
	if (nbl > 0)
		ft_putnbr_fd(nbl, fd);
	write(fd, &c, 1);
}
