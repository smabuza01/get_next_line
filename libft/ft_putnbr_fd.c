/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smabuza <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 03:25:06 by smabuza           #+#    #+#             */
/*   Updated: 2018/06/08 17:02:48 by smabuza          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	nbr;
	char			digit;

	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	nbr = n;
	if (nbr >= 10)
		ft_putnbr_fd(nbr / 10, fd);
	digit = (nbr % 10) + '0';
	write(fd, &digit, 1);
}
