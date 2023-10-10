/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 13:59:21 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/15 11:12:00 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power < 0)
		return (0);
	while (power >= 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_power(0, 0));
}*/
