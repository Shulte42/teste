/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 13:40:02 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/16 09:20:31 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index);

int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index < 0)
		return (-1);
	else 
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int	main(void)
{
	printf("%d", ft_fibonacci(5));
	return (0);
}*/
