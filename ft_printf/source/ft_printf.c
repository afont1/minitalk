/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:33:32 by afont             #+#    #+#             */
/*   Updated: 2022/12/09 00:26:06 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%' && str[1])
		{
			str++;
			i += ft_checkformat(*str, args);
			str++;
		}
		else
		{
			if (ft_putchar(*str++) == -1)
				return (-1);
			i++;
		}
	}
	va_end(args);
	return (i);
}

/*
int main()
{
	ft_printf("\001\002\007\v\010\f\r\n");
}*/
