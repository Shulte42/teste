/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 16:00:58 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/05 14:48:02 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str);

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 65 && str[i] <= 90) 
				|| (str[i] >= 97 && str[i] <= 122)))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	str0[] = "Brunno";
	char	str1[] = "Brunn0";
	char	str2[6];

	printf("%d. \n", ft_str_is_alpha(str0));
	printf("%d. \n", ft_str_is_alpha(str1));
	printf("%d. \n", ft_str_is_alpha(str2));
}*/
