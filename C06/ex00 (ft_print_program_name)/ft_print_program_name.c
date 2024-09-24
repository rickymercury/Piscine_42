/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 21:31:54 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/24 21:45:13 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 0)
		ft_putstr(argv[0]);
    ft_putstr("\n");
	return (0);
}

////////////////////////////// OU \\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc > 0)  // Verifica se o programa foi executado com ao menos um argumento
	{
		while (argv[0][i] != '\0')
		{
			write(1, &argv[0][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}