/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraizman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:22:07 by vraizman           #+#    #+#            */
/*   Updated: 2023/10/30 17:03:02 by vraizman          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 7;
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	ft_ultimate_div_mod( &a, &b);
	printf("*a = %d\n", a);
	printf("*b = %d\n", b);
}
*/