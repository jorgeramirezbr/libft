/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorramir <jorramir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 11:17:38 by jorramir          #+#    #+#             */
/*   Updated: 2024/01/19 15:06:32 by jorramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
//#include <string.h>

/*It copies strings and take the full size of the destination buffer and
  guarantee NUL-termination if there is room.  Note that room for the NUL
  should be included in dstsize. it copies up to dstsize - 1 characters from   
  the string src to dst, NUL-terminating the result if dstsize is not 0.
  It returns the total length of the string they tried to create, 
  that means the length of src.
  If the return value is >= dstsize, the output string has been truncated.
  It is the caller's responsibility to handle this.*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t		res;
	const char	*s;

	s = src;
	res = 0;
	while (((dstsize - 1) > 0) && (*s != '\0'))
	{
		*dst = *s;
		dst++;
		s++;
		dstsize--;
	}
	*dst = '\0';
	while (src[res] != '\0')
	{
		res++;
	}
	return (res);
}
/*
int	main(void)
{
	char	res[20];
	char	src[] = "Hello world";

	//printf("Origin string: %s\n", src);
	//printf("String size: %zu\n", ft_strlcpy(res, src, sizeof(res)));
	//printf("Result string: %s\n", res);
	printf("Origin string: %s\n", src);
	printf("String size: %zu\n", ft_strlcpy(res, src, 19));
	printf("Result string: %s\n", res);
	return (0);
}*/
