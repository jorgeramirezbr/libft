/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorramir <jorramir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:40:54 by jorramir          #+#    #+#             */
/*   Updated: 2024/01/19 17:55:59 by jorramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>
//#include <ctype.h>

/*It converts an upper-case letter to the corresponding lower-case letter.  
  The argument must be representable as an unsigned char or the value of EOF.
  It RETURNS the corresponding lower-case letter if there is one; 
  otherwise, the argument is returned unchanged.*/
int	ft_tolower(int c)
{
	if ((c >= 65) && (c <= 90))
		return (c += 32);
	return (c);
}
/*
int	main(void)
{
	char	x;

	x = 90;
	printf("Char: %c\n", x);
	printf("MyTolower: %c\n", ft_tolower(x));
	return (0);
}*/
