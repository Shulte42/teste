/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 11:20:01 by bruda-si          #+#    #+#             */
/*   Updated: 2023/07/31 11:14:51 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (a / b);
	*mod = (a % b);
}
/*
int	main(void)
{
	int a;
	int b;
	int	result;
	int	result2;
	int *div;
	int *mod;	

	a = 31;
	b = 2;
	div = &result;
	mod = &result2;
	printf("O valor do dividendo e: %d.\n", a);
	printf("O valor do divisor e: %d.\n", b);
	ft_div_mod(a, b, div, mod);
	printf("O resultado da divisao inteira e: %d.\n", result);
	printf("O resultado do resto da divisao e: %d.\n", result2);
	return (0);
}*/
