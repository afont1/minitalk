/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:41:49 by afont             #+#    #+#             */
/*   Updated: 2022/12/08 21:53:41 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf.h"
#include "../libft/libft.h"

int	ft_putstr(char *str)
{
	int	i;

	if (!str)
	{
		if (write(1, "(null)", 6) == -1)
			return (-1);
		return (6);
	}	
	i = ft_strlen(str);
	while (*str)
		if (ft_putchar(*str++) == -1)
			return (-1);
	return (i);
}
