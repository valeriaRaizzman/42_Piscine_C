/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraizman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:17:00 by vraizman           #+#    #+#            */
/*   Updated: 2023/11/01 23:19:02 by vraizman          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	swap;

	i = 0;
	j = size - 1;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[j];
		tab[j] = swap;
		i++;
		j--;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

void	ft_rev_int_tab(int *tab, int size);

void	print_tab(int *tab, int size)
{
	int	i;

	i = 0;
	printf("[ ");
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	printf("]\n");
}

int	main(int ac, char **av)
{
	int	tab[32];
	int	i;

	i = 0;
	while (i < ac)
	{
		tab[i - 1] = atoi(av[i]);
		i++;
	}
	printf("Original: ");
	print_tab(tab, ac - 1);
	printf("Reverted: ");
	ft_rev_int_tab(tab, ac - 1);
	print_tab(tab, ac - 1);
	return (0);
}
*/