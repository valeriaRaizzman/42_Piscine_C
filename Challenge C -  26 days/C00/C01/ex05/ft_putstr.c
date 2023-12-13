/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraizman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:04:00 by vraizman           #+#    #+#            */
/*   Updated: 2023/11/01 16:56:01 by vraizman          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*
#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	*str;

	str = "allo";
	ft_putstr(str);
	return (0);
}
*/