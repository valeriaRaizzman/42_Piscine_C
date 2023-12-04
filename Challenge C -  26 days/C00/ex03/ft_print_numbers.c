/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraizman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 14:10:00 by vraizman           #+#    #+#            */
/*   Updated: 2023/10/28 14:43:03 by vraizman          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

/*


Crea una función que muestre todos los dígitos, en una sola línea, en orden ascendente.
• Así es como debería ser el prototipo:


void ft_print_numbers(void);


*/

#include <unistd.h>

void	ft_print_numbers(void)
{
	char num;

	num = '0';
	while (num <= '9')
	{
		write(1, &num, 1);
		num++;
	}
}