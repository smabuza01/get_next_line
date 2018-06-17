/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 20:35:52 by smabuza           #+#    #+#             */
/*   Updated: 2018/06/08 12:01:59 by smabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (!needle[0])
		return ((char *)&haystack[i]);
	while (haystack[j])
	{
		while (needle[i] == haystack[j + i] && needle[i])
		{
			i++;
		}
		if (!needle[i])
			return ((char *)&haystack[j]);
		i = 0;
		j++;
	}
	return (NULL);
}
