/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorramir <jorramir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 12:50:23 by jorramir          #+#    #+#             */
/*   Updated: 2024/01/17 17:02:48 by jorramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

/*it tests for any printing character, including space (` '). 
  The value of the argument must be representable as an unsigned char 
  or the value of EOF.*/
int	isprint(int c)
{
	return (c >= 32 && c <= 126);
}
/*
int	main(void)
{
	char	x;

	x = ' ';
	if (isprint(x))
	{
		printf("'%c' is printable\n", x);
	}
	else
	{
		printf("'%c' is not printable\n", x);
	}
}*/
