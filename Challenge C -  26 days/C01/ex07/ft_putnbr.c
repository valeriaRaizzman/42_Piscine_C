/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraizman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 10:06:01 by vraizman           #+#    #+#            */
/*   Updated: 2023/10/29 13:23:03 by vraizman          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

/*

Crea una función que muestre el número ingresado como parámetro. La función debe ser capaz de mostrar todos los valores posibles dentro de una variable de tipo int.
• Así es como debería ser el prototipo:

void ft_putnbr(int nb);

• Por ejemplo:

• ft_putnbr(42) muestra "42".

*/

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb <= INT_MAX && nb >= INT_MIN)
	{
		if (nb == INT_MIN)
		{
			ft_putchar('-');
			ft_putchar('2');
			ft_putnbr(147483648);
		}
		else if (nb < 0)
		{
			ft_putchar('-');
			ft_putnbr(-nb);
		}
		else if (nb > 9)
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
		else
		{
			ft_putchar(nb + '0');
		}
	}
}