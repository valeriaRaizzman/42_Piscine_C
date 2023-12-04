/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraizman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:54:04 by vraizman           #+#    #+#            */
/*   Updated: 2023/10/29 19:15:02 by vraizman          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

/*

• Crea una función que muestre todas las combinaciones diferentes de n números en orden ascendente.
• n será tal que: 0 < n < 10.
• Si n = 2, este sería el resultado esperado:


$>./a.out | cat -e
01, 02, 03, ..., 09, 12, ..., 79, 89$>

• Así es como debería ser el prototipo:

void ft_print_combn(int n);


*/

#include <unistd.h>

int g_lenght;
char g_array[10];

void	rec(int prev, int n)
{
	int i;

	if (n == g_lenght)
	{
		write(1, g_array, g_lenght);
		write(1, ", ", 2);
		return ;
	}
	if (prev == 9)
		return ;
	i = prev;
	while (++i <= 10 - g_lenght + n)
	{
		g_array[n] = '0' + i;
		rec(i, n + 1);
	}
}

void	print_last(int i)
{
	char c;

	while (i <= 9)
	{
		c = '0' + i++;
		write(1, &c, 1);
	}
}

void	ft_print_combn(int n)
{
	int i;

	i = 0;
	g_lenght = n;
	while (i < 10 - n)
	{
		g_array[0] = '0' + i;
		rec(i++, 1);
	}
	print_last(i);
}