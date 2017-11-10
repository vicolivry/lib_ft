/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:07:26 by volivry           #+#    #+#             */
/*   Updated: 2017/11/10 17:29:50 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle)
		return ((char *)haystack);
	while (haystack[i])
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
