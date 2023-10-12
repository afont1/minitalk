/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkformat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 21:31:19 by afont             #+#    #+#             */
/*   Updated: 2022/12/08 22:26:31 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf.h"

int	ft_checkformat(char format, va_list args)
{
	int	i;

	i = 0;
	if (format == 'c')
		i = ft_putchar(va_arg(args, int));
	else if (format == 's')
		i = ft_putstr(va_arg(args, char *));
	else if (format == 'p')
		i = ft_putadress(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		i = ft_putnbr(va_arg(args, int));
	else if (format == 'u')
		i = ft_putnbr_unsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		i = ft_put10to16(va_arg(args, unsigned int));
	else if (format == 'X')
		i = ft_put10to16_maj(va_arg(args, unsigned int));
	else if (format == '%')
		i = ft_putchar('%');
	return (i);
}
