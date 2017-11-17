/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 14:46:06 by volivry           #+#    #+#             */
/*   Updated: 2017/11/17 11:05:56 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char const *s, int fd)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char*)s;
	if (s != NULL)
	{
		while (str[i])
			ft_putchar_fd(str[i++], fd);
	}
}
