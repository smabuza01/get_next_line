/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 17:06:31 by smabuza           #+#    #+#             */
/*   Updated: 2018/06/08 00:36:04 by smabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		trimcount(const char *s, char c)
{
	unsigned int	i;
	size_t			w;

	i = 0;
	w = 0;
	while (s[i])
	{
		if (s[i] != c)
			w += 1;
		while (s[i] != c && s[i + 1])
			i += 1;
		i += 1;
	}
	return (w);
}

static	int		lentrim(const char *s, char c)
{
	unsigned int	i;
	size_t			len;

	i = 0;
	len = 0;
	while (s[i] == c)
		i += 1;
	while (s[i] != c && s[i++])
		len += 1;
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	size_t	j;
	size_t	k;
	char	**new;

	i = 0;
	k = 0;
	if (!s || !(new = (char **)malloc(sizeof(char *) * (trimcount(s, c) + 1))))
		return (NULL);
	while (i < trimcount(s, c))
	{
		if (!(new[i] = (char *)malloc(sizeof(char) * (lentrim(&s[k], c) + 1))))
			return (NULL);
		j = 0;
		while (s[k] == c)
			k += 1;
		while (s[k] != c && s[k])
			new[i][j++] = s[k++];
		new[i][j] = '\0';
		i += 1;
	}
	new[i] = NULL;
	return (new);
}
