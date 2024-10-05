/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 00:02:50 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/22 00:14:51 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str) //Vamos garantir que todos os caracteres da string estejam em minúsculas antes de aplicar a capitalização das palavras
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char *ft_strcapitalize(char *str)
{
    int i = 0;
    int capitalize_next = 1; // Inicialmente, a próxima letra deve ser capitalizada

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (capitalize_next)
            {
                str[i] -= 32;
                capitalize_next = 0; // Após capitalizar, não capitaliza as letras seguintes da mesma palavra
            }
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        else if (str[i] >= '0' && str[i] <= '9' || str[i] == '_' || str[i] == '-')
            capitalize_next = 0; // Após números e caracteres especiais, não capitaliza letras
        else
            capitalize_next = 1; // Para caracteres não alfabéticos e não numéricos, prepara para capitalizar a próxima letra
        i++;
    }

    return (str);
}

/*
#include <stdio.h>

int	main()
{
	char str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char str1[] = "rekt17+lol mdr mdr 4242l42";
	printf("%s", ft_strcapitalize(str));
	printf("\n%s", ft_strcapitalize(str1));

	return (0);
}
*/