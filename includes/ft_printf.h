/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahernan <mahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 19:07:57 by mahernan          #+#    #+#             */
/*   Updated: 2022/06/04 19:08:03 by mahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_print
{
	va_list	args;
	int		len;
}			t_print;

int			ft_printf(const char *format, ...);

void		ft_putchar(char c);
void		ft_putstr(char *s);
void		ft_putnbr(long int n);
char		*ft_strchr(const char *s, int c);

void		ft_base_10(unsigned int i, t_print *tab);
void		ft_base_hex_low(unsigned int i, t_print *tab);
void		ft_base_hex_cap(unsigned int i, t_print *tab);
void		ft_base_hex_point(unsigned long int i, t_print *tab);

void		ft_print_char(t_print *tab);
void		ft_print_string(t_print *tab);
void		ft_print_point_hex(t_print *tab);
void		ft_print_int(t_print *tab);
void		ft_print_int_dec(t_print *tab);
void		ft_print_int_hex_low(t_print *tab);
void		ft_print_int_hex_cap(t_print *tab);
void		ft_print_perc(t_print *tab);

#endif
