/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorramir <jorramir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:07:48 by jorramir          #+#    #+#             */
/*   Updated: 2024/01/19 19:08:40 by jorramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
//#include <string.h>

/*It locates the first occurrence of c (converted to a char) in 
  the string pointed to by s.  
  The terminating null character is considered to be part of the string; 
  therefore if c is `\0', the functions locate the terminating `\0'.
  It RETURNS a pointer to the located character, 
  or NULL if the character does not appear in the string.*/
char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return (NULL);
}
/*
int	main(void)
{
	char	*str = "murcielago";
	char	x;
	char	*res;

	x = '\0';
	res = ft_strchr(str, x);
	printf("String: %s\n", str);
	printf("Wanted char: %c\n", x);
	if (res != NULL)
	{
		printf("The char '%c', was found in the string", *res);
	}
	else
	{
		printf("The char '%c', was not found in the string", x);
	}
}*/
