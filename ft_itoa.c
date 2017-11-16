/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 10:04:23 by volivry           #+#    #+#             */
/*   Updated: 2017/11/16 10:50:10 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		ft_countchar(int n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while (n /= 10)
		count++;
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		len;
	long	long_n;

	i = 0;
	long_n = (long)n;
	len = ft_countchar(long_n);
	if (!(str = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (long_n < 0)
	{
		str[0] = '-';
		long_n *= -1;
	}
	i = len;
	while (i--)
	{
		if (str[i] != '-')
			str[i] = '0' + (long_n % 10);
		long_n /= 10;
	}
	str[len] = '\0';
	return (str);
}
