/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 18:18:27 by volivry           #+#    #+#             */
/*   Updated: 2017/11/14 10:52:58 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*newstr;

	i = 0;
	newstr = (char *)s;
	while (newstr[i])
	{
		(*f)(newstr[i]);
		i++;
	}
	(ft_strdup(newstr));
	return (newstr);
}
