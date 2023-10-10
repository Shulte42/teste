/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:10:05 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/15 11:23:01 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	mult;

	mult = 0;
	while (mult * mult <= nb && mult < 46341)
	{
		if (mult * mult == nb)
			return (mult);
		mult++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d", ft_sqrt(2147395600));
}*/
