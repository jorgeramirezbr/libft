/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorramir <jorramir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:04:47 by jorramir          #+#    #+#             */
/*   Updated: 2024/01/17 17:04:08 by jorramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

/*The isascii() function tests for an ASCII character*/
int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
/*
int	main(void)
{
	unsigned char	x;

	x = 241;
	if (ft_isascii(x))
	{
		printf("%c is ascii\n", x);
	}
	else
	{
		printf("%c is not ascii\n", x);
	}
	x = 'a';
	if (ft_isascii(x))
	{
		printf("%c is ascii\n", x);
	}
	else
	{
		printf("%c is not ascii\n", x);
	}
}*/
