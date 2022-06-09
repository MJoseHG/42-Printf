/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahernan <mahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 20:43:16 by mahernan          #+#    #+#             */
/*   Updated: 2022/06/04 20:43:26 by mahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_int(t_print *tab)
{
	int	a;

	a = va_arg(tab->args, long int);
	if (a < 0)
	{
		a = -a;
		tab->len++;
		ft_putchar('-');
	}
	ft_putnbr(a);
	if (a == 0)
		tab->len++;
	while (a != 0)
	{
		a = a / 10;
		tab->len++;
	}
}
