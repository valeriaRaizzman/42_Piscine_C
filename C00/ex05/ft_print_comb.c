/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraizman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 19:33:04 by vraizman           #+#    #+#            */
/*   Updated: 2023/10/28 20:27:01 by vraizman          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

/*

Crea una función que muestre todas las combinaciones diferentes de tres dígitos distintos en orden ascendente, enumeradas por orden ascendente; sí, la repetición es voluntaria.
• Este es el resultado esperado:

$>./a.out | cat -e
012, 013, 014, 015, 016, 017, 018, 019, 023, ..., 789$>

• El 987 no está incluido porque ya está presente el 789.
• El 999 no está incluido porque el dígito 9 está presente más de una vez.
• Así es como debería ser el prototipo:


void ft_print_comb(void);


*/

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char value)
{
	write(1, &value, 1);
}

void	ft_result(char x, char y, char z)
{
	bool last_char;

	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
	last_char = !(x == '7' && y == '8' && z == '9');
	if (last_char)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	char x;
	char y;
	char z;

	x = '0';
	while (x <= '7')
	{
		y = x + 1;
		while (y <= '8')
		{
			z = y + 1;
			while (z <= '9')
			{
				ft_result(x, y, z);
				z++;
			}
			y++;
		}
		x++;
	}
}