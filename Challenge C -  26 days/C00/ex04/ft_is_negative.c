/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraizman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 18:01:00 by vraizman           #+#    #+#            */
/*   Updated: 2023/10/28 18:55:05 by vraizman          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

/*

Crea una función que muestre 'N' o 'P' dependiendo del signo del entero ingresado como parámetro. Si 'n' es negativo, muestra 'N'. Si 'n' es positivo o nulo, muestra 'P'.
• Así es como debería ser el prototipo:


void ft_is_negative(int n);


*/


#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(int n)
{
	char ans;

	if (n < 0)
	{
		ans = 'N';
		write(1, &ans, 1);
	}
	else
	{
		ans = 'P';
		write(1, &ans, 1);
	}
}