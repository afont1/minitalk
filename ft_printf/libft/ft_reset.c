/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_reset.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 16:21:23 by afont             #+#    #+#             */
/*   Updated: 2023/06/05 16:21:25 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../../Minitalk.h"
#include "libft.h"

void	ft_reset1(int *j, int *i, int *tab)
{
	int	k;
	int	reset_tab[8];

	reset_tab[0] = 9;
	k = -1;
	*j = 0;
	*i = 0;
	while (++k < 8)
		tab[k] = 0;
	bin_to_char(reset_tab);
}

void	ft_reset2(int *flag, int *len)
{
	*flag = 0;
	*len = 0;
	memoire(0, -1);
}

int	ft_reset3(char **str, int *i)
{
	if (str)
	{
		free(*str);
		*str = NULL;
	}
	*i = 0;
	return (0);
}
