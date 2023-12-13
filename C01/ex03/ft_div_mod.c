/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraizman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:09:03 by vraizman           #+#    #+#            */
/*   Updated: 2023/10/30 16:16:00 by vraizman          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* 
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
    int div;
    int mod;
    
	printf("a = %d b = %d\n", 7, 10);
	ft_div_mod(7, 10, div, mod);
	printf("div = %d et mod = %d\n", div, mod);
	return (0);
}
*/