/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 11:42:48 by volivry           #+#    #+#             */
/*   Updated: 2017/11/17 15:54:48 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	char	*newstr_bis;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return (ft_strdup(s2));
	if (s2 == NULL)
		return (ft_strdup(s1));
	newstr = ft_strnew(ft_strlen(s1) + ft_strlen(s2));
	if (newstr == NULL)
		return (NULL);
	newstr_bis = newstr;
	while (*s1 != '\0')
		*newstr_bis++ = *s1++;
	while (*s2 != '\0')
		*newstr_bis++ = *s2++;
	return (newstr);
}
