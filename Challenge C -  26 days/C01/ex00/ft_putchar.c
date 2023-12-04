/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraizman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 12:03:10 by vraizman           #+#    #+#            */
/*   Updated: 2023/10/27 12:11:01 by vraizman          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

/* 

Escribe una función que muestre el carácter pasado como parámetro.
• Se prototipará de la siguiente manera:


void ft_putchar(char c);


Para mostrar el carácter, debes utilizar la función write de la siguiente manera:
write(1, &c, 1); 

*/

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}