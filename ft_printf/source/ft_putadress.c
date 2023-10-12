/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putadress.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:27:06 by afont             #+#    #+#             */
/*   Updated: 2022/12/08 22:05:44 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft/libft.h"
#include "../include/ft_printf.h"

int	ft_putadress(void *pt)
{
	unsigned long	temp;
	char			*str;
	int				i;

	temp = (unsigned long)pt;
	if (ft_putstr("0x") == -1)
		return (-1);
	str = ft_itoa_base(temp, "0123456789abcdef");
	if (ft_putstr(str) == -1)
		return (-1);
	if (str)
		i = ft_strlen(str);
	else
		return (-1);
	free(str);
	return (i + 2);
}
