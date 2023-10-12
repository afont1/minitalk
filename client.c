/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:04:57 by afont             #+#    #+#             */
/*   Updated: 2023/06/01 18:08:18 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Minitalk.h"

void	char_to_bin(char c, int pid)
{
	int	i;

	i = 8;
	while (--i >= 0)
	{
		if (c & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(500);
		c >>= 1;
	}
}

void	send_len(char *str, int pid)
{
	char	*len_str;
	int		len_int;
	int		i;

	len_int = ft_strlen(str);
	i = ft_strlen(ft_itoa(len_int));
	len_str = malloc(i);
	len_str = ft_itoa(len_int);
	i--;
	while (i >= 0)
		char_to_bin(len_str[i--], pid);
}

void	ft_end(int pid)
{
	int	i;

	i = 0;
	while (i < 8)
	{
		kill(pid, SIGUSR2);
		usleep(500);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		if (pid <= 0)
			return (ft_printf("Error PID\n"));
		if (argv[2])
			send_len(argv[2], pid);
		ft_end(pid);
		while (argv[2][i])
			char_to_bin(argv[2][i++], pid);
		ft_end(pid);
	}
	else
		return (ft_printf("Error\n"));
	return (0);
}
