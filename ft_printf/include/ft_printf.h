/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afont <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:00:27 by afont             #+#    #+#             */
/*   Updated: 2022/12/07 23:32:43 by afont            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../libft/libft.h"
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_putchar(char c);
int		ft_putnbr(int nb);
int		ft_putstr(char *str);
int		ft_putadress(void *var);
int		ft_putnbr_unsigned(unsigned int nb);
int		ft_put10to16(unsigned int nb);
int		ft_put10to16_maj(unsigned int nb);
int		ft_checkformat(char format, va_list args);
size_t	ft_intlen(unsigned long long n, int base_len);

#endif
