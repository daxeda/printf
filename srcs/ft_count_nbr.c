/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xeniaherzi <xeniaherzi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:04:52 by xeniaherzi        #+#    #+#             */
/*   Updated: 2023/05/08 14:27:17 by xeniaherzi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_count_int(int nbr)
{
	int	count;

	if (nbr == 0)
		return (1);
	count = 0;
	if (nbr < 0)
		count++;
	while (nbr)
	{
		count++;
		nbr = nbr / 10;
	}
	return (count);
}

int	ft_count_unsigned(unsigned int nbr)
{
	int	count;

	if (nbr == 0)
		return (1);
	count = 0;
	if (nbr < 0)
		count++;
	while (nbr)
	{
		count++;
		nbr = nbr / 10;
	}
	return (count);
}

int	ft_count_hex(unsigned long nbr)
{
	int	count;

	if (nbr == 0)
		return (1);
	count = 0;
	if (nbr < 0)
		count++;
	while (nbr)
	{
		count++;
		nbr = nbr / 16;
	}
	return (count);
}
