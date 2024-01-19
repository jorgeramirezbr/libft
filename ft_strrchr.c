/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorramir <jorramir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 18:57:23 by jorramir          #+#    #+#             */
/*   Updated: 2024/01/19 19:46:11 by jorramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
//#include <string.h>

/*It locates the last occurrence of c (converted to a char) 
  in the string pointed to by s.  
  The terminating null character is considered to be part of the string; 
  therefore if c is `\0', the function locate the terminating `\0'.
  It RETURNS a pointer to the located character, 
  or NULL if the character does not appear in the string.*/
char	*ft_strrchr(const char *s, int c)
{
	const char	*res;

	res = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			res = s;
		s++;
	}
	if (c == '\0')
		res = s;
	if (res != NULL)
	{
		return ((char *)res);
	}
	else
	{
		return (NULL);
	}
}
/*
int	main(void)
{
	char	*str = "Razzmatazz";
	char	x;
	char	*res;

	x = 'a';
	res = ft_strrchr(str, x);
	printf("String: %s\n", str);
	printf("Wanted char: '%c'\n", x);
	if (res != NULL)
	{
		printf("The char '%c' was found, since the last char: %s\n", *res, res);
	}
	else
	{
		printf("The char '%c' was not found in the string\n", x);
	}
	return (0);
}*/
