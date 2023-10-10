/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:29:33 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/10 15:51:39 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	while (*str != '\0')
		write (1, str++, 1);
}
/*
int	main(void)
{
	char	str[] = "Funciona!!";

	ft_putstr(str);
}*/	
