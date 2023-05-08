/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xeniaherzi <xeniaherzi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:41:10 by xeniaherzi        #+#    #+#             */
/*   Updated: 2023/05/08 14:59:04 by xeniaherzi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	string(va_list arg)
{
	char	*s;
	int		len;

	if (!arg)
		return (0);
	s = va_arg(arg, char *);
	if (!s)
		s = "(null)";
	len = ft_strlen(s);
	putstr_fd(s, 1);
	return (len);
}

// if s null f(x) sets *p to s (null)
