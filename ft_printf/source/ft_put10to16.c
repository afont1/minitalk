/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put10to16.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 00:15:32 by afont             #+#    #+#             */
/*   Updated: 2022/12/07 22:08:08 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf.h"
#include "../libft/libft.h"

int	ft_put10to16(unsigned int nb)
{
	char	*str;
	int		i;

	str = ft_itoa_base(nb, "0123456789abcdef");
	ft_putstr(str);
	i = ft_strlen(str);
	free(str);
	return (i);
}
