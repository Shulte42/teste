/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 13:49:02 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/10 15:26:01 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str);

int	ft_atoi(char *str)
{
	int	neg;
	int	nbr;

	neg = 1;
	nbr = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	while (*str == 45 || *str == 43)
	{
		if (*str == 45)
			neg *= -1;
		str++;
	}
	while (*str)
	{
		if (!(*str >= 48 && *str <= 57))
			return (nbr);
		if (neg == 1)
			nbr = nbr * 10 + (*str - 48);
		else 
			nbr = nbr * 10 - (*str - 48);
		str++;
	}
	return (nbr);
}
/*
int	main(void)
{
	char	str[] = "    ---+++--121225hhh6";

	printf("%d.\n", ft_atoi(str));
}*/
