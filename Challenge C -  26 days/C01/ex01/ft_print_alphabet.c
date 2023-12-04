/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraizman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:00:12 by vraizman           #+#    #+#            */
/*   Updated: 2023/10/27 13:22:03 by vraizman          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

/*


• Crea una función que muestre el alfabeto en minúsculas, en una sola línea, en orden ascendente, empezando desde la letra 'a'.
• Así es como debería ser el prototipo:


  void ft_print_alphabet(void);


*/


#include <unistd.h>

void	ft_print_alphabet(void)
{
	char counter;

	counter = 'a';
	while (counter <= 'z')
	{
		write(1, &counter, 1);
		counter++;
	}
}