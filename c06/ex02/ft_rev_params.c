/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:26:31 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/14 10:49:44 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i++], 1);
	}
}

void	rev_params(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i >= 1)
	{
		ft_putstr(argv[i--]);
		write (1, "\n", 1);
	}
}

int	main(int argc, char **argv)
{
	if (argc <= 1)
		return (0);
	rev_params(argc, argv);
	return (0);
}
