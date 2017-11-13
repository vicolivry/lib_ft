/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:38:09 by volivry           #+#    #+#             */
/*   Updated: 2017/11/13 11:17:54 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*cast_dst;
	unsigned char	*cast_src;

	i = 0;
	cast_dst = (unsigned char*)dst;
	cast_src = (unsigned char *)src;
	while (i < n)
	{
		cast_dst[i] = cast_src[i];
		if (cast_dst[i] == c)
		{
			dst = (void *)cast_dst;
			return (dst);
		}
		i++;
	}
	dst = (void *)cast_dst;
	return (dst);
}
