/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caenys <caenys@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 20:28:21 by caenys            #+#    #+#             */
/*   Updated: 2021/02/19 20:28:58 by caenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

void	ft_swap(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		read_index;
	int		index;
	bool	swapped;

	read_index = 0;
	while (true)
	{
		swapped = false;
		index = 0;
		while (index < size)
		{
			if (tab[index] > tab[index + 1])
			{
				ft_swap(&tab[index], &tab[index + 1]);
				swapped = true;
			}
			index++;
		}
		if (!swapped)
		{
			break ;
		}
		read_index++;
	}
}
