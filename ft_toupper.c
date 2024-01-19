/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorramir <jorramir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:07:39 by jorramir          #+#    #+#             */
/*   Updated: 2024/01/19 17:56:15 by jorramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

/*It converts a lower-case letter to the corresponding upper-case letter.
  The argument must be representable as an unsigned char or the value of EOF.
  It RETURNS the corresponding upper-case letter if there is one; 
  otherwise, the argument is returned unchanged.*/
int	ft_toupper(int c)
{
	if ((c >= 97) && (c <= 122))
		return (c -= 32);
	return (c);
}
/*
int	main(void)
{
	char	x;

	x = 42;
	printf("Char: %c\n", x);
	printf("MyToupper: %c\n", ft_toupper(x));
	return (0);
}*/
