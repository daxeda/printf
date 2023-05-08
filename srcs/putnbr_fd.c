/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putnbr_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xeniaherzi <xeniaherzi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:20:27 by xeniaherzi        #+#    #+#             */
/*   Updated: 2023/05/08 14:57:26 by xeniaherzi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	putnbr_fd(int n, int fd)
{
	long int	nbr;

	nbr = n;
	if (nbr < 0)
	{
		putchar_fd('-', fd);
		nbr *= -1;
	}
	if (nbr > 9)
	{
		putnbr_fd(nbr / 10, fd);
		putnbr_fd(nbr % 10, fd);
	}
	else
		putchar_fd(nbr + '0', fd);
}

void	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	if (n > 9)
	{
		putnbr_fd(n / 10, fd);
		putnbr_fd(n % 10, fd);
	}
	else
		putchar_fd(n + '0', fd);
}

void	ft_putnbr_hex_fd(const char format, unsigned int n, int fd)
{
	if (n >= 16)
	{
		ft_putnbr_hex_fd(format, n / 16, fd);
		ft_putnbr_hex_fd(format, n % 16, fd);
	}
	else
	{
		if (n <= 9)
			putchar_fd(n + '0', fd);
		else
		{
			if (format == 'x')
				putchar_fd(n % 10 + 'a', fd);
			if (format == 'X')
				putchar_fd(n % 10 + 'A', fd);
		}
	}
}

void	ft_putnbr_hex_pointer_fd(unsigned long n, int fd)
{
	if (n >= 16)
	{
		ft_putnbr_hex_pointer_fd(n / 16, fd);
		ft_putnbr_hex_pointer_fd(n % 16, fd);
	}
	else
	{
		if (n <= 9)
			putchar_fd(n + '0', fd);
		else
			putchar_fd(n % 10 + 'a', fd);
	}
}
