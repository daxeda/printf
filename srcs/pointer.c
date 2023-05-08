/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pointer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xeniaherzi <xeniaherzi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:06:06 by xeniaherzi        #+#    #+#             */
/*   Updated: 2023/05/08 14:58:46 by xeniaherzi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	pointer(va_list arg)
{
	unsigned long	nb;
	int				count;

	if (!arg)
		return (0);
	nb = va_arg(arg, unsigned long);
	count = ft_count_hex(nb);
	putstr_fd("0x", 1);
	ft_putnbr_hex_pointer_fd(nb, 1);
	return (count + 2);
}

// calculate nbr digits rpZ int in hex using f(x) counthex
// return nbr char printed 
