/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 16:48:39 by smabuza           #+#    #+#             */
/*   Updated: 2018/06/08 16:47:52 by smabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *str2;
	unsigned char *str1;

	str2 = (unsigned char *)dst;
	str1 = (unsigned char *)src;
	if (len <= 0)
		return (dst);
	if (str1 < str2)
	{
		while (len)
		{
			str2[len - 1] = str1[len - 1];
			len--;
		}
		return (str2);
	}
	else
	{
		ft_memcpy(dst, src, len);
		return (str2);
	}
}
