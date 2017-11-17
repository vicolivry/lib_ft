/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:28:41 by volivry           #+#    #+#             */
/*   Updated: 2017/11/17 12:40:06 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*newstr;
	unsigned int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	newstr = (char*)malloc(sizeof(char) * len + 1);
	if (newstr == NULL)
		return (NULL);
	while (i < len)
		newstr[i++] = s[start++];
	newstr[i] = '\0';
	return (newstr);
}
