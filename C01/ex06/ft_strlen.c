/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraizman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:08:03 by vraizman           #+#    #+#            */
/*   Updated: 2023/11/01 18:44:00 by vraizman          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
    char	*str;

	str = "patate";
	printf("longueur de la string patate : %d\n", ft_strlen(str));
	return (0);
}
*/