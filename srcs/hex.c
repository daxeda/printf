/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hex.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xeniaherzi <xeniaherzi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:05:31 by xeniaherzi        #+#    #+#             */
/*   Updated: 2023/05/08 14:58:33 by xeniaherzi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	hex(const char format, va_list arg)
{
	unsigned int	nbr;
	int				count;

	nbr = va_arg(arg, unsigned int);
	count = ft_count_hex(nbr);
	ft_print_hex(nbr, count, format);
	return (count);
}

void	ft_print_hex(unsigned int nbr, int count, const char format)
{
	char			*hex;
	const char		*base;

	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	hex = malloc((count + 1) * sizeof(char));
	if (!hex)
		return ;
	hex[count] = '\0';
	while (count--)
	{
		hex[count] = base[nbr % 16];
		nbr /= 16;
	}
	putstr_fd(hex, 1);
	free(hex);
}

// 35 allocate memory for the buffer
// 36 check if allocation successs
// 45 release allocated memory when done 