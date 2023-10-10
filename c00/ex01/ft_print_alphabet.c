/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:06:09 by bruda-si          #+#    #+#             */
/*   Updated: 2023/07/26 21:08:58 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
	{
	char	c;

	c = 'a';
	while (c <= 'z')
	{
		write (1, &c, 1);
		++c;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	return (0);
}*/
