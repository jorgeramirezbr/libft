/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorramir <jorramir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 18:36:30 by jorramir          #+#    #+#             */
/*   Updated: 2024/01/17 16:57:30 by jorramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <string.h>
//#include <stdio.h>

/*The memset() function writes len bytes of value c (converted to an
  unsigned char) to the string b*/
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = b;
	value = (unsigned char)c;
	while (len > 0)
	{
		*ptr = value;
		ptr++;
		len--;
	}
	return (b);
}
/*
int	main(void)
{
	char	str[10] = "Holas";
	char	*res;

	printf("string: %s\n", str);
	res = ft_memset(str, 42, 3);
	printf("org_memset: %s\n", memset(str, 42, 3));
	printf("mio_memset: %s\n", res);
	return (0);
}*/
