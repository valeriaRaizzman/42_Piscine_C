/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraizman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:11:03 by vraizman           #+#    #+#            */
/*   Updated: 2023/10/28 17:45:01 by vraizman          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

/*


• Crea una función que muestre el alfabeto en minúsculas, en una sola línea, en orden descendente, empezando desde la letra 'z'.
• Así es como debería ser el prototipo:


void ft_print_reverse_alphabet(void);


*/

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char counter;

	counter = 'z';
	while (counter >= 'a')
	{
		write(1, &counter, 1);
		counter--;
	}
}