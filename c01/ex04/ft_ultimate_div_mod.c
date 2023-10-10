/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:13:18 by bruda-si          #+#    #+#             */
/*   Updated: 2023/07/31 11:16:32 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mov;

	div = *a / *b;
	mov = *a % *b;
	*a = div;
	*b = mov;
}
/*
int	main()
{
	int	n1;
	int	n2;

	n1 = 10;
	n2 = 20;
	ft_ultimate_div_mod(&n1, &n2);
	printf("%d, %d.", n1, n2);
	return (0);
}*/
