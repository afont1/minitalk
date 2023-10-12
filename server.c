/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:08:33 by afont             #+#    #+#             */
/*   Updated: 2023/06/01 18:15:24 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Minitalk.h"

int	memoire(int c, int len)
{
	static char	*str;
	static int	i;

	if (len != -1)
	{
		if ((!c && !str))
			return (1);
		i++;
		if (!c)
		{
			ft_printf("%s", str);
			free(str);
			str = NULL;
			i = 0;
			return (1);
		}
		if (!str)
			str = malloc(len + 1);
		if (!str)
			return (0);
		str[i - 1] = c;
		str[i] = 0;
		return (0);
	}
	return (ft_reset3(&str, &i));
}

int	conversion(int tab[8])
{
	int	carac;
	int	i;

	carac = 0;
	i = 8;
	while (--i >= 0)
	{
		if (tab[i] == 1)
			carac |= 1;
		if (i != 0)
			carac <<= 1;
	}
	return (carac);
}

void	bin_to_char(int tab[8])
{
	int			carac;
	static int	flag;
	static int	len;

	if (tab[0] == 9)
	{
		ft_reset2(&flag, &len);
		return ;
	}
	carac = conversion(tab);
	if (!flag)
	{
		if (carac)
			len += ft_len_str(carac, &flag);
		else
			ft_len_str(-1, &flag);
	}
	else
	{
		if (memoire(carac, len))
		{
			flag = 0;
			len = 0;
		}
	}
}

void	sighandler(int signal)
{
	static int	i;
	static int	tab[8];
	static int	j;

	if (signal != -1)
	{
		j = 0;
		if (signal == SIGUSR1)
			tab[i] = 1;
		i++;
		if (i == 8)
		{
			bin_to_char(tab);
			i = -1;
			while (++i < 8)
				tab[i] = 0;
			i = 0;
		}
	}
	j += 1;
	if (j > 2 && i != 0)
		ft_reset1(&j, &i, tab);
}

int	main(void)
{
	ft_printf("%d\n", getpid());
	signal(SIGUSR1, sighandler);
	signal(SIGUSR2, sighandler);
	while (1)
	{
		usleep(100000);
		sighandler(-1);
	}
	return (0);
}
