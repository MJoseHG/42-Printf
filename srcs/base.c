/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahernan <mahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 18:50:42 by mahernan          #+#    #+#             */
/*   Updated: 2022/06/04 18:50:49 by mahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_base_10(unsigned int i, t_print *tab)
{
	char	*base;

	base = "0123456789";
	if (i >= 10)
	{
		ft_base_10(i / 10, tab);
		ft_base_10(i % 10, tab);
	}
	else
	{
		ft_putchar(base[i]);
		tab->len++;
	}
}

void	ft_base_hex_low(unsigned int i, t_print *tab)
{
	char	*base;

	base = "0123456789abcdef";
	if (i >= 16)
	{
		ft_base_hex_low(i / 16, tab);
		ft_base_hex_low(i % 16, tab);
	}
	else
	{
		ft_putchar(base[i]);
		tab->len++;
	}
}

void	ft_base_hex_cap(unsigned int i, t_print *tab)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (i >= 16)
	{
		ft_base_hex_cap(i / 16, tab);
		ft_base_hex_cap(i % 16, tab);
	}
	else
	{
		ft_putchar(base[i]);
		tab->len++;
	}
}

void	ft_base_hex_point(unsigned long int i, t_print *tab)
{
	char	*base;

	base = "0123456789abcdef";
	if (i >= 16)
	{
		ft_base_hex_point(i / 16, tab);
		ft_base_hex_point(i % 16, tab);
	}
	else
	{
		ft_putchar(base[i]);
		tab->len++;
	}
}
