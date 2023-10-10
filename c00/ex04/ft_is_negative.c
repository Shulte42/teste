/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:58:44 by bruda-si          #+#    #+#             */
/*   Updated: 2023/07/27 13:45:48 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);		

void	ft_is_negative(int n)
{
	if (n >= 0)
		write (1, &"P", 1);
	else
		write (1, &"N", 1);
}
/*
int	main(void)
{
	ft_is_negative(-5);
	ft_is_negative(2);
	return (0);
}*/
