/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 23:16:09 by rickymercur       #+#    #+#             */
/*   Updated: 2024/10/03 23:54:23 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_charset(char c, char *charset)  // check separator
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

int	ft_count_word(char *str, char *charset)
{
	int	i;
	int	total;

	i = 0;
	total = 0;

	while (str[i] != '\0')
	{
		while (str[i] && (ft_is_charset(str[i], charset)))
			i++;
		if (str[i])
			total++;
		while (str[i] && !(ft_is_charset(str[i], charset)))
			i++;
	}
	return (total);
}

int	ft_word_len(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_is_charset(str[i], charset))
		i++;
	return (i);
}

char	*ft_add_word(char *str, char *charset)
{
	char    *word;
    int     word_len;
    int     i;

	i = 0;
    word_len = ft_word_len(str, charset);
	word = (char *)malloc (sizeof(char) * (word_len + 1));
	if (!word)
		return (NULL);
	while (word_len > i)
	{
		word[i] = word[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
    int     j;
	char	**tab;

	i = 0;
    j = 0;
	tab = (char **)malloc((ft_count_word(str, charset) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_is_charset(str[i], charset))
			i++;
		if (str[i] != '\0')
        {
            tab[j] = ft_add_word(&str[i], charset);
            if (!tab[j])
                return (NULL);
            j++;
            i += ft_word_len(&str[i], charset);
        }
    }
    tab[j] = NULL;
    return (tab);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello, World! Welcome to 42.";
	char	charset[] = " ,.!";
	char	**result;
	int	i;

	result = ft_split(str, charset);
	i = 0;
	while (result[i])
	{
		printf("Index %d : %s\n", i, result[i]);
		i++;
	}
	//printf("OUTPUT% %s\n", result[1]);
	return (0);
}
*/