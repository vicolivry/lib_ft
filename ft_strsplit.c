/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:53:15 by volivry           #+#    #+#             */
/*   Updated: 2017/11/14 18:29:18 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_lenword(const char *str, char c)
{
	int	count;

	count = 0;
	while (*str != c)
	{
		str++;
		count++;
	}
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		nb_word;
	int		j;

	i = 0;
	nb_word = ft_wordcount(s, c);
	if ((tab = (char **)malloc(sizeof(char *) * nb_word + 1)) == NULL)
		return (NULL);
	while (nb_word--)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			j = 0;
			if ((tab[i] = malloc(sizeof(char) * ft_lenword(s, c) + 1)) == NULL)
				return (NULL);
			while (*s && *s != c)
				tab[i][j++] = *s++;
			tab[i++][j] = '\0';
		}
	}
	tab[i] = NULL;
	return (tab);
}
