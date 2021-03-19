/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caenys <caenys@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 17:24:57 by caenys            #+#    #+#             */
/*   Updated: 2021/02/24 20:59:59 by caenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int factorial;
	int i;

	if (nb < 0)
		return (0);
	i = 1;
	factorial = 1;
	while (i < nb + 1)
		factorial *= i++;
	return (factorial);
}
