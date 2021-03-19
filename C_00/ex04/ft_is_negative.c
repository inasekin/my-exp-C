/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caenys <caenys@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/18 14:50:27 by caenys            #+#    #+#             */
/*   Updated: 2021/02/18 15:57:24 by caenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char test;

	if (n >= 0)
	{
		test = 'P';
	}
	else
	{
		test = 'N';
	}
	write(1, &test, sizeof(test));
}
