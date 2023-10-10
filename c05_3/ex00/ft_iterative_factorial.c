/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 11:32:22 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/14 12:23:42 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (res = 1);
	while (i <= nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(6));
}*/
