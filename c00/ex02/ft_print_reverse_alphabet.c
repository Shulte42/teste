/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 14:56:22 by bruda-si          #+#    #+#             */
/*   Updated: 2023/07/26 21:10:57 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void);

void	ft_print_reverse_alphabet(void)
	{
	char	c;

	c = 122;
	while (c >= 97)
	{
		write (1, &c, 1);
		--c;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}*/
