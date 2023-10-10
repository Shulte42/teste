/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 12:30:05 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/15 11:10:54 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	res;

	i = 1;
	res = 1;
	if (nb == 1 || nb == 0)
		return (1);
	else if (nb < 0)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main(void)
{
	printf("%d", ft_recursive_factorial(7));
	return (0);
}*/
