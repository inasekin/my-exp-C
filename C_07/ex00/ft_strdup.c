/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caenys <caenys@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:43:40 by caenys            #+#    #+#             */
/*   Updated: 2021/02/26 21:15:27 by caenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_strlen(char *str)
{
	int length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}

char		*ft_strdup(char *src)
{
	int		length;
	char	*dest;

	length = ft_strlen(src);
	if ((dest = malloc(sizeof(*src) * (length + 1))) == ((void *)0))
		return (((void *)0));
	while (length >= 0)
	{
		dest[length] = src[length];
		length--;
	}
	return (dest);
}
