/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorramir <jorramir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 10:14:22 by jorramir          #+#    #+#             */
/*   Updated: 2024/01/17 17:06:08 by jorramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

/*it tests for any character for which isalpha or isdigit is true.  
  The value of the argument must be representable as an unsigned char 
  or the value of EOF*/
int	isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	char	x;

	x = '@';
	if (isalnum(x))
	{
		printf("%c is alpha or digit", x);
	}
	else
	{
		printf("%c is not alpha or digit", x);
	}
}*/
