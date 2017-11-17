/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: volivry <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 15:23:04 by volivry           #+#    #+#             */
/*   Updated: 2017/11/17 16:20:47 by volivry          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	size_t	i;

	i = 0;
	if (content != NULL)
	{
		while (i++ < content_size)
			ft_putchar('A');
	}
	return (NULL);
}
