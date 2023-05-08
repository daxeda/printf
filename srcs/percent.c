/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   percent.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xeniaherzi <xeniaherzi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:05:56 by xeniaherzi        #+#    #+#             */
/*   Updated: 2023/05/08 14:54:10 by xeniaherzi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	percent(va_list arg)
{
	if (!arg)
		return (0);
	putchar_fd('%', 1);
	return (1);
}

//handle the conversion specifier "%%" in a formatted outp s
// output % to the standard outp