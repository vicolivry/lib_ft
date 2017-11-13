/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:16:49 by volivry           #+#    #+#             */
/*   Updated: 2017/11/13 18:01:58 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*temp;
	char	*trimmed_s;
	int		i;

	i = 0;
	while (ft_iswhite(s[i]))
		i++;
	temp = ft_strdup((char *)&s[i]);
	ft_strrev(temp);
	i = 0;
	while (ft_iswhite(temp[i]))
		i++;
	trimmed_s = ft_strdup(&temp[i]);
	trimmed_s = ft_strrev(trimmed_s);
	return (trimmed_s);
}
