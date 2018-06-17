/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 03:55:31 by smabuza           #+#    #+#             */
/*   Updated: 2018/06/08 21:16:18 by smabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	if (s)
	{
		i = 0;
		j = ft_strlen((char *)(s)) - 1;
		while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			i++;
		if (!(str = (char*)malloc(sizeof(*str) * (j - i + 1))))
			return (NULL);
		while (s[j] == ' ' || s[j] == '\n' || s[j] == '\t')
			j--;
		k = 0;
		while (i <= j)
		{
			str[k++] = s[i];
			i++;
		}
		str[k] = '\0';
		return (str);
	}
	return (NULL);
}
