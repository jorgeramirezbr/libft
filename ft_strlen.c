/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorramir <jorramir@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:46:26 by jorramir          #+#    #+#             */
/*   Updated: 2024/01/17 16:58:57 by jorramir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//#include <stdio.h>

/*The strlen() function computes the length of the string s*/
size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	char	*str;

	str = "Esternocleidomastoideo";
	printf("'%s' has %zu characters\n", str, ft_strlen(str));
}*/
