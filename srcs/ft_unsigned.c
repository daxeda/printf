/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xeniaherzi <xeniaherzi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:47:29 by xeniaherzi        #+#    #+#             */
/*   Updated: 2023/05/08 14:45:25 by xeniaherzi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_unsigned(va_list arg)
{
	unsigned int	nb;
	int				count;

	if (!arg)
		return (0);
	nb = va_arg(arg, unsigned int);
	count = ft_count_unsigned(nb);
	ft_putnbr_unsigned_fd(nb, 1);
	return (count);
}
