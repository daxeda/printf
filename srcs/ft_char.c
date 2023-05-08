/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xeniaherzi <xeniaherzi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:05:29 by xeniaherzi        #+#    #+#             */
/*   Updated: 2023/05/08 14:54:00 by xeniaherzi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_char(va_list arg)
{
	char	c;

	if (!arg)
		return (0);
	c = va_arg(arg, int);
	putchar_fd(c, 1);
	return (1);
}

//va access the arg passed 
//writes outp using putchar return 1 = success