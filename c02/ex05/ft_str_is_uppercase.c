/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 18:43:10 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/06 14:33:25 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
			return (0);
		i++;
	}
	return (1);
}
/*
int main(void)
{
       char    str0[] = "BRUNNO";
       char    str1[] = "brunno";
       char    str2[7];

       printf("%d. \n", ft_str_is_uppercase(str0));
       printf("%d. \n", ft_str_is_uppercase(str1));
       printf("%d. \n", ft_str_is_uppercase(str2));
}*/
