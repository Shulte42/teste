/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 12:57:39 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/05 15:01:59 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str);

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		++i;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "lo54werc54ase letters";

	printf("%s. \n", ft_strupcase(str));
}*/
