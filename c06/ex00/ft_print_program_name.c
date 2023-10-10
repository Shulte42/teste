/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruda-si <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/10 17:14:32 by bruda-si          #+#    #+#             */
/*   Updated: 2023/08/14 10:51:29 by bruda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	*str)
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
	if (argc > 0)
	{
		ft_putchar(argv[0]);
		write (1, "\n", 1);
	}
	return (0);
}
