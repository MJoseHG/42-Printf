/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int_hex_low.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahernan <mahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 20:51:11 by mahernan          #+#    #+#             */
/*   Updated: 2022/06/04 20:51:33 by mahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_int_hex_low(t_print *tab)
{
	int	a;

	a = va_arg(tab->args, unsigned int);
	ft_base_hex_low(a, tab);
}
