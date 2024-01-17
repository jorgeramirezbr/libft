/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorramir <jorramir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 16:54:02 by jorramir          #+#    #+#             */
/*   Updated: 2024/01/17 16:55:52 by jorramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

/*The bzero() function writes n zeroed bytes to the string s.  
 If n is zero, bzero() does nothing.*/
void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr = 0;
		ptr++;
		n--;
	}
}
/*
int	main(void)
{
	char			str[] = "Hello World";
	unsigned long	i;

	i = 0;
	printf("string: %s\n", str);
	printf("my_bzero: ");
	ft_bzero(str, 3);
	while (i < sizeof(str))
	{
		printf("%c", str[i]);
		i++;
	}
	return (0);
}*/
