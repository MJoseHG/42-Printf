/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahernan <mahernan@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 17:34:19 by mahernan          #+#    #+#             */
/*   Updated: 2022/06/04 17:48:38 by mahernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	ft_print_string(t_print *tab)
{
	char	*a;
	int		i;

	a = va_arg(tab->args, char *);
	if (a == NULL)
	{
		ft_putstr("(null)");
		tab->len += 6;
		return ;
	}
	i = 0;
	while (a[i])
	{
		ft_putchar(a[i]);
		i++;
	}
	tab->len += i;
}
