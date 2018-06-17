/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 22:02:31 by smabuza           #+#    #+#             */
/*   Updated: 2018/06/17 17:11:08 by smabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int		readbuffer(char **str, int fd)
{
	int		ret;
	char	*s;
	char	buf[BUFF_SIZE + 1];

	if ((ret = read(fd, buf, BUFF_SIZE)) == -1)
		return (-1);
	buf[ret] = '\0';
	s = *str;
	*str = ft_strjoin(*str, buf);
	if (*s != 0)
		free(s);
	return (ret);
}

static int		copyline(char **str, char **line, char *s)
{
	int		j;
	char	*s2;

	j = 0;
	if (*s == '\n')
		j = 1;
	*s = 0;
	*line = ft_strjoin("", *str);
	if (j == 0 && ft_strlen(*str) != 0)
	{
		*str = ft_strnew(1);
		return (1);
	}
	else if (j == 0 && !(ft_strlen(*str)))
		return (0);
	s2 = *str;
	*str = ft_strjoin(s + 1, "");
	free(s2);
	return (j);
}

int				get_next_line(int const fd, char **line)
{
	int			ret;
	static char	*str;
	char		*str2;

	if (str == 0)
		str = "";
	if (!line || (BUFF_SIZE < 1))
		return (-1);
	ret = BUFF_SIZE;
	while (line)
	{
		str2 = str;
		while (*str2 || ret < BUFF_SIZE)
		{
			if (*str2 == '\n' || *str2 == 0 || *str2 == -1)
				return (copyline(&str, line, str2));
			str2++;
		}
		ret = readbuffer(&str, fd);
		if (ret == -1)
			return (-1);
	}
	return (0);
}
