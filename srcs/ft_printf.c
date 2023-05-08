/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xeniaherzi <xeniaherzi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:15:34 by xeniaherzi        #+#    #+#             */
/*   Updated: 2023/05/08 15:00:26 by xeniaherzi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	arg;
	int		i;
	int		count;

	va_start(arg, format);
	i = 0;
	count = 0;
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			count += search(format + i, arg);
			i++;
		}
		else
		{
			putchar_fd(format[i], 1);
			count++;
		}
		i++;
	}
	va_end(arg);
	return (count);
}

// s input & uses format specifiers by % substitute values diff types into outp