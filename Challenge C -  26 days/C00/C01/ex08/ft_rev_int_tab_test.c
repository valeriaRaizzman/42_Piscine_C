/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraizman <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 00:34:01 by vraizman           #+#    #+#            */
/*   Updated: 2023/11/02 09:35:00 by vraizman          ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */


void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	count;

	count = 0;
	while (count < (size - 1))
	{
		if (tab[count] > tab[count + 1])
		{
			swap = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = swap;
			count = 0;
		}
		else
			count++;
	}
}

/*
#include <stdio.h>
#include <stdlib.h>

void	ft_sort_int_tab(int *tab, int size);

void	print_tab(int tab[], int size)
{
	int	i;

	i = -1;
	printf("[ ");
	while (++i < size)
		printf("%d, ", tab[i]);
	printf("]\n");
}

int	main(int argc, char *argv[])
{
	int	tab[32];
	int	i;

	i = 0;
	while (++i < argc)
		tab[i-1] = atoi(argv[i]);

	printf("Original list : ");
	print_tab(tab, argc - 1);
	printf("Sorted list : ");
	ft_sort_int_tab(tab, argc - 1);
	print_tab(tab, argc - 1);
	return (0);
}
*/