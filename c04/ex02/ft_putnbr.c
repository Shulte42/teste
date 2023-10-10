/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 16:45:27 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/10 15:50:50 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	long	nbl;
	char	c[10];
	int		i;

	nbl = nb;
	i = 0;
	if (0 == nb)
	{
		write (1, "0", 1);
		return ;
	}
	if (nbl < 0)
	{
		nbl *= -1;
		write (1, "-", 1);
	}
	while (nbl)
	{
		c[i++] = (nbl % 10) + 48;
		nbl /= 10;
	}
	while (i > 0)
		write (1, &c[--i], 1);
}
/*
int	main(void)
{
	ft_putnbr(42);
	write (1, "\n", 1);
	ft_putnbr(-2147483648);
	write (1, "\n", 1);
	ft_putnbr(214783647);
	write (1, "\n", 1);
}*/
