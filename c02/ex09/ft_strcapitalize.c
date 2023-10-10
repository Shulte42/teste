/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcaptalize.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 15:25:00 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/02 16:12:10 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str);

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		while (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	i1;

	i = 0;
	i1 = 1;
	ft_strlowcase(str);
	while (str[i] != 0)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if (i1 == 1)
				str[i] -= 32;
			i1 = 0;
		}
		else if (str[i] >= 48 && str[i] <= 57)
			i1 = 0;
		else
			i1 = 1;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";

	printf("%s. \n", ft_strcapitalize(str));
}*/
