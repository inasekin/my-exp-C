/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caenys <caenys@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 21:29:48 by caenys            #+#    #+#             */
/*   Updated: 2021/02/24 20:34:08 by caenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	if (nb < 2)
		return (0);
	i = 2;
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		i++;
	}
	return (1);
}

int		ft_find_next_prime(int nb)
{
	nb++;
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
