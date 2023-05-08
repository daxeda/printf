/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xeniaherzi <xeniaherzi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:02:13 by xeniaherzi        #+#    #+#             */
/*   Updated: 2023/05/08 15:09:43 by xeniaherzi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		string(va_list arg);
int		ft_char(va_list arg);
int		ft_int(va_list arg);
int		ft_unsigned(va_list arg);
int		hex(const char format, va_list arg);
int		ft_strlen(char *str);
int		percent(va_list arg);
int		pointer(va_list arg);
int		ft_count_int(int nbr);
int		ft_count_unsigned(unsigned int nbr);
int		ft_count_hex(unsigned long nbr);
int		search(const char *format, va_list arg);

void	ft_putnbr_hex_fd(const char format, unsigned int n, int fd);
void	ft_putnbr_hex_pointer_fd(unsigned long n, int fd);
void	ft_putnbr_unsigned_fd(unsigned int n, int fd);
void	putchar_fd(char c, int fd);
void	putstr_fd(char *s, int fd);
void	putnbr_fd(int n, int fd);
void	ft_print_hex(unsigned int nbr, int count, const char format);
#endif