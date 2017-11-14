/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 10:44:30 by volivry           #+#    #+#             */
/*   Updated: 2017/11/14 11:32:45 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*newstr;

	i = 0;
	newstr = (char *)s;
	while (newstr[i])
	{
		(*f)(i, newstr[i]);
		i++;
	}
	ft_strdup(newstr);
	return (newstr);
}
