/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:54:23 by afont             #+#    #+#             */
/*   Updated: 2022/12/08 22:29:42 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf.h"

static int	is_negative(int nb)
{
	int	i;

	if (nb == 0)
	{
		i = ft_putchar('0');
		return (1 * i);
	}
	else if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		return (0);
	}
	else
		return (0);
}

int	ft_putnbr(int nb)
{
	int		i;
	int		len;
	char	str[12];

	len = 0;
	i = is_negative(nb);
	if (!i)
	{
		i = 0;
		if (nb < 0)
		{
			nb = -nb;
			len += 1;
		}
		while (nb > 0)
		{
			str[i++] = nb % 10 + 48;
			nb /= 10;
		}
		str[i] = 0;
		while (--i >= 0)
			ft_putchar(str[i]);
		return (ft_strlen(str) + len);
	}
	return (i);
}

/*
int main()
{
    ft_putnbr(10);
}*/
