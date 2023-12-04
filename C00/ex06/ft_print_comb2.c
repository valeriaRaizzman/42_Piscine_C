/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraizman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 20:44:01 by vraizman           #+#    #+#            */
/*   Updated: 2023/10/28 23:34:04 by vraizman          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

/*

Crea una función que muestre todas las combinaciones diferentes de dos dígitos entre 00 y 99, enumeradas por orden ascendente.
• Este es el resultado esperado:

$>./a.out | cat -e
00 01, 00 02, 00 03, 00 04, 00 05, ..., 00 99, 01 02, ..., 97 99, 98 99$>

• Así es como debería ser el prototipo:
void ft_print_comb2(void);

*/

#include <unistd.h>

void	ft_putchar(char value)
{
	write(1, &value, 1);
}

void	ft_display(int value)
{
	int x;
	int y;

	if (value > 9)
	{
		x = value / 10;
		y = value % 10;
		ft_putchar(x + '0');
		ft_putchar(y + '0');
	}
	else
	{
		ft_putchar('0');
		ft_putchar(value + 48);
	}
}

void	ft_result(int x, int y)
{
	ft_display(x);
	ft_putchar(' ');
	ft_display(y);
	if (x < 98 || y < 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int x;
	int y;

	x = 0;
	while (x <= 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_result(x, y);
			y++;
		}
		x++;
	}
}