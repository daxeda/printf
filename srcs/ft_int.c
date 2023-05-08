/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xeniaherzi <xeniaherzi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:05:39 by xeniaherzi        #+#    #+#             */
/*   Updated: 2023/05/08 14:56:56 by xeniaherzi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_int(va_list arg)
{
	int	nbr;
	int	count;

	if (!arg)
		return (0);
	nbr = va_arg(arg, int);
	count = ft_count_int(nbr);
	putnbr_fd(nbr, 1);
	return (count);
}

// calculate nbr of digits in int value (ft_count_int)
// outputs int value to standart output w/ ft_putnbr_fd