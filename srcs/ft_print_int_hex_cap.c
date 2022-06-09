/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int_hex_cap.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahernan <mahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 20:54:34 by mahernan          #+#    #+#             */
/*   Updated: 2022/06/04 20:54:45 by mahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_int_hex_cap(t_print *tab)
{
	int	a;

	a = va_arg(tab->args, unsigned int);
	ft_base_hex_cap(a, tab);
}
