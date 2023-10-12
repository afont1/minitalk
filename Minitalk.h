/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:55:17 by afont             #+#    #+#             */
/*   Updated: 2023/06/02 16:09:17 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef MINITALK_H
# define MINITALK_H

# include "ft_printf/include/ft_printf.h"
# include <signal.h>

void	sighandler(int signal);
void	bin_to_char(int tab[8]);
int		memoire(int c, int len);

#endif
