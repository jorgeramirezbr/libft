/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorramir <jorramir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:28:34 by jorramir          #+#    #+#             */
/*   Updated: 2024/01/12 14:56:35 by jorramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

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
