/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 11:24:24 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/05 14:59:52 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str != 127))
			return (0);
		++str;
	}
	return (1);
}
/*
int	main()
{
	char	str[] = "brunno";
	char	str2[] = "aaa	aaaa";

	printf("%d. \n", ft_str_is_printable(str));
	printf("%d. \n", ft_str_is_printable(str2));
}*/
