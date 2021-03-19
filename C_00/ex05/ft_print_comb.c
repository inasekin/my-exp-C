/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caenys <caenys@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:50:36 by caenys            #+#    #+#             */
/*   Updated: 2021/02/18 15:46:50 by caenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char first;
	char second;
	char third;

	first = '0' - 1;
	while (first++ < '3')
	{
		second = first;
		while (second++ < '4')
		{
			third = second;
			while (third++ < '5')
			{
				if (!(first == '0' && second == '1' && third == '2'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ft_putchar(first);
				ft_putchar(second);
				ft_putchar(third);
			}
		}
	}
}
