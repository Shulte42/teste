/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 13:22:06 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/05 15:03:01 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		++i;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "UPPERaaaaa5445a LETTERS";

	printf("%s.\n", ft_strlowcase(str));
}*/
