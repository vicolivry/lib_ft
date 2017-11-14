/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:28:41 by volivry           #+#    #+#             */
/*   Updated: 2017/11/14 18:29:23 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*newstr;
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		newstr[i] = s[start];
		i++;
		start++;
	}
	ft_strdup(newstr);
	if (!newstr)
		return (NULL);
	return (newstr);
}