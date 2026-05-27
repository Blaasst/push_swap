/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 13:38:29 by jait-ame          #+#    #+#             */
/*   Updated: 2026/04/20 13:38:29 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*ptr;
	char	*ptr2;

	ptr = (char *) dest ;
	ptr2 = (char *) src;
	if (ptr <= ptr2)
	{
		while (n > 0)
		{
			*ptr++ = *ptr2++;
			n--;
		}
	}
	else if (ptr > ptr2)
	{
		ptr += n - 1;
		ptr2 += n - 1;
		while (n > 0)
		{
			*ptr-- = *ptr2--;
			n--;
		}
	}
	return (dest);
}
