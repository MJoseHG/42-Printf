/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_point_hex.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahernan <mahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 20:05:31 by mahernan          #+#    #+#             */
/*   Updated: 2022/06/04 20:09:34 by mahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_point_hex(t_print *tab)
{
	unsigned long	a;

	a = va_arg(tab->args, unsigned long);
	ft_putstr("0x");
	tab->len += 2;
	ft_base_hex_point(a, tab);
}
