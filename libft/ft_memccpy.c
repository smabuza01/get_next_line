/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 17:59:40 by smabuza           #+#    #+#             */
/*   Updated: 2018/06/08 20:04:09 by smabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *restrict dst,
		const void *restrict src, int c, size_t n)
{
	unsigned	char	*str;
	unsigned	char	*dest;
	unsigned	char	f;
	size_t				i;

	i = 0;
	str = (unsigned char *)src;
	dest = (unsigned char *)dst;
	f = (unsigned char)c;
	while (i < n)
	{
		dest[i] = str[i];
		if (str[i] == f)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
