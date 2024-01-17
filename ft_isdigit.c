/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorramir <jorramir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 09:48:14 by jorramir          #+#    #+#             */
/*   Updated: 2024/01/17 17:06:58 by jorramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

/*tests for a decimal digit character*/
int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
int	main(void)
{
	char	a;

	a = '9';
	if (ft_isdigit(a))
	{
		printf("%c is a digit", a);
	}
	else
	{
		printf("%c is not a digit", a);
	}
}*/
