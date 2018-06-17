/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 11:02:57 by smabuza           #+#    #+#             */
/*   Updated: 2018/06/08 17:22:14 by smabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t lend;
	size_t lens;
	size_t i;

	lend = (size_t)ft_strlen((char *)dst);
	lens = (size_t)ft_strlen((char *)src);
	i = lend;
	while ((*src) && ((lend + 1) < dstsize))
	{
		dst[lend++] = *src++;
	}
	dst[lend] = '\0';
	if (i > dstsize)
		return (lens + dstsize);
	else
		return (lens + i);
}
