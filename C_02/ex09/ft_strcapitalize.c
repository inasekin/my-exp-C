/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caenys <caenys@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 22:12:32 by caenys            #+#    #+#             */
/*   Updated: 2021/02/20 22:16:41 by caenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		iss_alpha(char c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}

int		is_maj(char c)
{
	return ((c >= 'A') && (c <= 'Z'));
}

char	is_min(char c)
{
	return ((c >= 'a') && (c <= 'z'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		while (str[i] && !iss_alpha(str[i]))
			i++;
		if (str[i] && is_min(str[i]))
			str[i] = ((str[i] - 'a') + 'A');
		i++;
		while (str[i] && iss_alpha(str[i]))
		{
			if (is_maj(str[i]))
				str[i] = ((str[i] - 'A') + 'a');
			i++;
		}
	}
	return (str);
}
