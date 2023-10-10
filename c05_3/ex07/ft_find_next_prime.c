/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 10:14:15 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/15 11:26:48 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	res;

	i = 1;
	if (nb <= 1)
		return (2);
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb + i) != 1)
		i++;
	res = nb + i;
	return (res);
}
/*
int	main(void)
{
	printf("%d", ft_find_next_prime(1000));
	return (0);
}*/
