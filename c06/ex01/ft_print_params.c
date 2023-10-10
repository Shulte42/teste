/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:27:34 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/14 10:52:04 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i++], 1);
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc == 0)
		return (0);
	while (i < argc)
	{
		ft_putchar(argv[i]);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
