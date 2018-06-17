/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 09:03:56 by smabuza           #+#    #+#             */
/*   Updated: 2018/06/08 20:11:54 by smabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_t;
	size_t	i;
	char	*new;

	if (s1 && s2)
	{
		i = 0;
		len_t = ft_strlen(s1) + ft_strlen(s2);
		if ((new = ft_strnew(len_t)))
		{
			while (*s1)
			{
				new[i] = *s1++;
				i++;
			}
			while (*s2)
			{
				new[i] = *s2++;
				i++;
			}
			return (new);
		}
		return (0);
	}
	return (NULL);
}
