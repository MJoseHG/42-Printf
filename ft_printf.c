/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahernan <mahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 19:10:43 by mahernan          #+#    #+#             */
/*   Updated: 2022/06/04 19:10:58 by mahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

t_print	*ft_init_tab(t_print *tab)
{
	tab->len = 0;
	return (tab);
}

void	ft_convert(char c, t_print *tab)
{
	if (c == 'c')
		ft_print_char(tab);
	else if (c == 's')
		ft_print_string(tab);
	else if (c == 'p')
		ft_print_point_hex(tab);
	else if (c == 'd' || c == 'i')
		ft_print_int(tab);
	else if (c == 'u')
		ft_print_int_dec(tab);
	else if (c == 'x')
		ft_print_int_hex_low(tab);
	else if (c == 'X')
		ft_print_int_hex_cap(tab);
	else if (c == '%')
		ft_print_perc(tab);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	t_print	*tab;

	tab = (t_print *)malloc(sizeof(t_print));
	if (!tab)
		return (-1);
	tab = ft_init_tab(tab);
	i = 0;
	va_start(tab->args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			if (ft_strchr("cspdiuxX%", format[i + 1]))
				ft_convert(format[i++ + 1], tab);
		}
		else
		{
			ft_putchar(format[i]);
			tab->len++;
		}
		i++;
	}
	free(tab);
	return (tab->len);
}
