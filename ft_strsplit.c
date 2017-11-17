/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:53:15 by volivry           #+#    #+#             */
/*   Updated: 2017/11/17 18:14:44 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_lenword(const char *str, char c)
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

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		v[3];

	v[2] = 0;
	v[0] = ft_wordcount(s, c);
	if (!s)
		return (NULL);
	if ((tab = (char **)malloc(sizeof(char *) * v[0] + 1)) == NULL)
		return (NULL);
	while (v[0]--)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			v[1] = 0;
			if ((tab[v[2]] = malloc(ft_lenword(s, c) + 1)) == NULL)
				return (NULL);
			while (*s && *s != c)
				tab[v[2]][v[1]++] = *s++;
			tab[v[2]++][v[1]] = '\0';
		}
	}
	tab[v[2]] = NULL;
	return (tab);
}
