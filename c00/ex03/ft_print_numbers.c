/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:08:52 by bruda-si          #+#    #+#             */
/*   Updated: 2023/07/28 08:05:36 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_print_numbers(void)
	{
	char	c;

	c = '0';
	while (c <= '9')
	{
		write(1, &c, 1);
		++c;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
