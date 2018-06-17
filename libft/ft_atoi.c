/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/20 17:04:43 by smabuza           #+#    #+#             */
/*   Updated: 2018/06/08 21:12:46 by smabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int j;
	int nbr;
	int k;

	j = 1;
	k = 0;
	nbr = 0;
	while (*str == ' ' || *str == '\t' || *str == '\v' || *str == '\n'
			|| *str == '\r' || *str == '\f')
		str++;
	if (*str == '-')
		j = -1;
	if ((*str == '-' || *str == '+'))
		str++;
	while (ft_isdigit(*str))
	{
		nbr = nbr * 10 + (int)*str - '0';
		str++;
		k++;
	}
	if (k > 19)
		return ((nbr == -1) ? 0 : -1);
	return (j * nbr);
}
