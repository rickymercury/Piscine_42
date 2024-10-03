/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 00:41:31 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/04 00:41:34 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	total;

	i = 0;
	total = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_is_charset(str[i], charset))
			i++;
		if (str[i] != '\0')
		{
			total++;
			while (str[i] != '\0' && !(ft_is_charset(str[i], charset)))
				i++;
		}
	}
	return (total);
}

char	*word_dup(char *str, char *charset)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] != '\0' && !ft_is_charset(str[i], charset))
		i++;
	word = (char *)malloc((i + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && !ft_is_charset(str[i], charset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		i;
	int		j;
	int		words;

	words = count_words(str, charset);
	result = (char **)malloc((words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_is_charset(str[i], charset))
			i++;
		if (str[i] != '\0')
		{
			result[j] = word_dup(&str[i], charset);
            if (!result[j])
                return (NULL);
			j++;
			while (str[i] != '\0' && !ft_is_charset(str[i], charset))
				i++;
		}
	}
	result[j] = 0;
	return (result);
}

/*
#include <stdio.h>

int main(void)
{
    char str[] = "Hello, World! Welcome to 42.";
    char charset[] = " ,.!";
    char **result = ft_split(str, charset);
    int i = 0;

    if (result)
    {
        while (result[i])
        {
            printf("Index %d : %s\n", i, result[i]);
            free(result[i]);
            i++;
        }
        free(result);
    }

    return 0;
}
*/