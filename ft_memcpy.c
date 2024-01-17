/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorramir <jorramir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 11:50:18 by jorramir          #+#    #+#             */
/*   Updated: 2024/01/17 17:27:48 by jorramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
//#include <string.h>

/* it copies n bytes from memory area src to memory area dst. 
 * If dst and src overlap, behavior is undefined.  
 * Applications in which dst and src might overlap should use memmove instead*/
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*destination;
	const unsigned char	*source;

	destination = (unsigned char *)dst;
	source = (const unsigned char *)src;
	if (!destination && !source)
		return (0);
	while (n > 0)
	{
		*destination = *source;
		destination++;
		source++;
		n--;
	}
	return (dst);
}
/*
int	main(void)
{
	char	source[] = "Hello world";
	char	dest[] = "World world";

	printf("Before: %s\n", dest);
	ft_memcpy(dest, source, 5);
	printf("Dest: %s\n", dest);
	return (0);
}*/
