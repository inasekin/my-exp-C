/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_str.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caenys <caenys@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 16:33:57 by caenys            #+#    #+#             */
/*   Updated: 2021/02/27 16:34:16 by caenys           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FT_STOCK_STR_H
# define __FT_STOCK_STR_H

typedef struct		s_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}					t_stock_str;

void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
void				ft_print_words_tables(char **tab);
void				ft_show_tab(struct s_stock_str *par);

#endif
