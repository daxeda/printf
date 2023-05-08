/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xeniaherzi <xeniaherzi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 12:09:47 by xeniaherzi        #+#    #+#             */
/*   Updated: 2023/05/08 14:53:02 by xeniaherzi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}