/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:36:34 by volivry           #+#    #+#             */
/*   Updated: 2017/11/13 14:12:57 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle)
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		if (haystack[i] != needle[j])
			j = 0;
		if (haystack[i] == needle[j])
		{
			if (j == ft_strlen(needle) - 1)
				return ((char *)haystack + i - j);
			j++;
		}
		i++;
	}
	return (NULL);
}
