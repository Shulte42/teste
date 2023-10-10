/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 17:25:43 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/14 10:47:31 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str++, 1);
	}
	write (1, "\n", 1);
}

int	compare(char *str, char *str2)
{
	int	i;

	i = 0;
	while ((str[i] != '\0' || str2[i] != '\0') && str[i] == str2[i])
		i++;
	return (str[i] - str2[i]);
}

void	ft_sort(int argc, char **argv)
{
	char	*tmp;
	int		i;
	int		j;

	j = 0;
	while (j < argc)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (compare(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
			}
			i++;
		}
		j++;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc <= 0)
		return (0);
	ft_sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		putstr(argv[i++]);
	}
	return (argc);
}
