/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caenys <caenys@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/23 14:57:25 by caenys            #+#    #+#             */
/*   Updated: 2021/02/23 17:15:36 by caenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

#define NO_MATCH -1

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

bool	is_space(char c)
{
	return (c == '\t' || c == '\n' || c == '\v' || c == '\f'
		|| c == '\r' || c == ' ');
}

bool	is_base_valid(char *str)
{
	char	*curr;
	int		i;
	int		index;

	curr = str;
	if (str == 0 || ft_strlen(str) <= 1)
		return (false);
	while (*curr)
	{
		if (is_space(*curr) || *curr == '+' || *curr == '-')
			return (false);
		curr++;
	}
	i = 0;
	while (i < curr - str)
	{
		index = i + 1;
		while (index < curr - str)
			if (str[i] == str[index++])
				return (false);
		i++;
	}
	return (true);
}

int		resolve_base(char *base, char match)
{
	int		i;

	i = 0;
	while (base[i])
	{
		if (base[i] == match)
			return (i);
		i++;
	}
	return (NO_MATCH);
}

int		ft_atoi_base(char *str, char *base)
{
	int	radix;
	int	result;
	int	minus;
	int	resolved;

	if (!is_base_valid(base))
		return (0);
	radix = ft_strlen(base);
	result = 0;
	minus = 1;
	while (is_space(*str))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			minus *= -1;
		str++;
	}
	while ((resolved = resolve_base(base, *str)) != NO_MATCH)
	{
		result *= radix;
		result += resolved;
		str++;
	}
	return (result * minus);
}
