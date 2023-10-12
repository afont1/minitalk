/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put10to16_maj.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 00:28:02 by afont             #+#    #+#             */
/*   Updated: 2022/12/08 21:04:01 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft/libft.h"
#include "../include/ft_printf.h"

int	ft_put10to16_maj(unsigned int nb)
{
	char	*str;
	int		i;

	i = -1;
	str = ft_itoa_base(nb, "0123456789abcdef");
	while (str[++i])
		str[i] = ft_toupper(str[i]);
	ft_putstr(str);
	i = ft_strlen(str);
	free(str);
	return (i);
}
