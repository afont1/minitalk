/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 23:58:39 by afont             #+#    #+#             */
/*   Updated: 2022/12/08 20:59:41 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nb)
{
	int		i;
	char	str[11];

	i = 0;
	if (nb == 4294967295)
	{
		write(1, "4294967295", 10);
		return (10);
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	while (nb > 0)
	{
		str[i++] = nb % 10 + 48;
		nb /= 10;
	}
	str[i] = 0;
	while (--i >= 0)
		ft_putchar(str[i]);
	return (ft_strlen(str));
}
