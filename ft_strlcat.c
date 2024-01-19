/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorramir <jorramir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 16:31:52 by jorramir          #+#    #+#             */
/*   Updated: 2024/01/19 17:09:17 by jorramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
//#include <string.h>

/*It concatenates strings and take the full size of the destination buffer and
  guarantee NUL-termination if there is room.
  Note that room for the NUL should be included in dstsize.
  It appends string src to the end of dst.
  It will append at most dstsize - strlen (dst) - 1 characters.
  It will then NUL-terminate, unless dstsize is 0 or the original dst string was
  longer than dstsize (in practice this should not happen as it means that
  either dstsize is incorrect or that dst is not a proper string).
  If the src and dst strings overlap, the behavior is undefined.
  It RETURNS the total length of the string it tried to create,
  that means the initial length of dst plus the length of src.
  If the return value is >= dstsize, the output string has been truncated.*/
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	res;
	size_t	dlen;
	size_t	slen;

	dlen = 0;
	slen = 0;
	while (dst[dlen] != '\0')
	{
		dlen++;
	}
	while (src[slen] != '\0')
	{
		slen++;
	}
	res = dlen + slen;
	while (((dstsize - dlen - 1) > 0) && (*src != '\0'))
	{
		dst[dlen] = *src;
		src++;
		dlen++;
	}
	dst[dlen] = '\0';
	return (res);
}
/*
int	main(void)
{
	char	dst[10] = "Hello ";
	char	*src = "world";

	printf("src: %s\n", src);
	printf("dst: %s\n", dst);
	printf("Res string size: %zu\n", ft_strlcat(dst, src, 9));
	printf("Res string: %s\n", dst);
}*/
