/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rickymercury <ricardomedeirosx@gmail.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 22:52:27 by rickymercur       #+#    #+#             */
/*   Updated: 2024/09/22 23:05:29 by rickymercur      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
#include<stdio.h>

int main(void)
{
    char s1[] = "benfica";
    char s2[] = "benfico";
    char s3[] = "BENFICA";
    char s4[] = "BenficaCampeão";
    char s5[] = "ricardo medeiros";

    unsigned int n1 = 5;
    unsigned int n2 = 3;
    unsigned int n3 = 10;

    int result1 = ft_strncmp(s1, s2, n1);
    printf("\"%s\" e \"%s\" nos primeiros %u caracteres: %d\n", s1, s2, n1, result1);

    int result2 = ft_strncmp(s1, s4, n2);
    printf("\"%s\" e \"%s\" nos primeiros %u caracteres: %d\n", s1, s4, n2, result2);

    int result3 = ft_strncmp(s1, s3, n1);
    printf("\"%s\" e \"%s\" nos primeiros %u caracteres: %d\n", s1, s3, n1, result3);

    int result4 = ft_strncmp(s1, s5, n3);
    printf("\"%s\" e \"%s\" nos primeiros %u caracteres: %d\n", s1, s5, n3, result4);

    return 0;
}
*/