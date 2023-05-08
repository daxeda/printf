/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xeniaherzi <xeniaherzi@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 14:21:29 by xeniaherzi        #+#    #+#             */
/*   Updated: 2023/05/08 14:57:42 by xeniaherzi       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	putstr_fd(char *s, int fd)
{	
	if (!s || fd < 0)
		return ;
	write(fd, s, ft_strlen(s));
}

//output a string to given fd 
//insurance no output if *s is NULL or fd invalid
