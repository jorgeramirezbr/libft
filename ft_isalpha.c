/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorramir <jorramir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:28:34 by jorramir          #+#    #+#             */
/*   Updated: 2024/01/17 17:08:24 by jorramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

/*it tests for any character for which isupper or islower is true.  
  The value of the argument must be representable as an unsigned char 
  or the value of EOF*/
int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
int	main(void)
{
	char	a;

	a = 'z';
	if (ft_isalpha(a))
	{
		printf("%c is alpha", a);
	}
	else
	{
		printf("%c is not alpha", a);
	}
}*/
