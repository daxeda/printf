/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xeniaherzi <xeniaherzi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:23:51 by xeniaherzi        #+#    #+#             */
/*   Updated: 2023/05/08 14:50:49 by xeniaherzi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	search(const char *format, va_list arg)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (format && format[i + 1] == 's')
		count += string(arg);
	if (format && format[i + 1] == 'c')
		count += ft_char(arg);
	if (format && format[i + 1] == 'u')
		count += ft_unsigned(arg);
	if (format && (format[i + 1] == 'd' || format[i + 1] == 'i'))
		count += ft_int(arg);
	if (format && (format[i + 1] == 'x' || format[i + 1] == 'X'))
		count += hex(format[i + 1], arg);
	if (format && format[i + 1] == 'p')
		count += pointer(arg);
	if (format && format[i + 1] == '%')
		count += percent(arg);
	return (count);
}
