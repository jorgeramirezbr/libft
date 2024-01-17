/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorramir <jorramir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 17:08:50 by jorramir          #+#    #+#             */
/*   Updated: 2024/01/17 19:03:14 by jorramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
//#include <string.h>

/*It copies len bytes from string src to string dst.
 The two strings may overlap; the copy is always done in a 
 non-destructive manner*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dst && !src)
		return (0);
	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	i = 0;
	if (d > s)
	{
		while (len > i++)
		{
			d[len - i] = s[len - i];
		}
	}
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char	source[] = "Hello, World!";
	char	destination[20];

	memmove(destination, source, 13);
	printf("Cadena copiada: %s\n", destination);
	return (0);
}*/
