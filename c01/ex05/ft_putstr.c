/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 09:34:58 by bruda-si          #+#    #+#             */
/*   Updated: 2023/07/31 10:21:43 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	while (*str != 0)
	{
		write (1, &*str, 1);
		str++;
	}
}
/*
int	main(void)
{
	char	*str;
	
	str = "Brunno";
	ft_putstr(str);
	return 	(0);
}*/
