/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 10:12:20 by volivry           #+#    #+#             */
/*   Updated: 2017/11/15 17:13:37 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cast_dst;
	unsigned char	*cast_src;

	i = 0;
	cast_src = (unsigned char *)src;
	cast_dst = (unsigned char *)dst;
	while (i < n)
	{
		cast_dst[i] = cast_src[i];
		i++;
	}
	dst = (void *)cast_dst;
	return (dst);
}
