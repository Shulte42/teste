/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 17:29:17 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/05 16:43:38 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 97 && str[i] <= 122))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
	char	str0[] = "Brunno";
	char    str1[] = "brunno";
	char    str2[7];

	printf("%d. \n", ft_str_is_lowercase(str0));
        printf("%d. \n", ft_str_is_lowercase(str1));
        printf("%d. \n", ft_str_is_lowercase(str2));
}*/
