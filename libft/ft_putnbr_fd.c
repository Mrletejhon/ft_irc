/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 16:14:53 by sbres             #+#    #+#             */
/*   Updated: 2014/05/13 02:11:47 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"
#include <unistd.h>

int		getnbofchars(int n)
{
	int	size;
	int	ncp;

	ncp = n;
	size = 1;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	while (ncp > 10)
	{
		ncp = ncp / 10;
		size++;
	}
	return (size);
}

int		nbpwr10(int n)
{
	int	total;

	total = 1;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		total = total * 10;
		n--;
	}
	return (total);
}

void	ft_putnbr_fd(int n, int fd)
{
	int	size;
	int	tmp;

	tmp = n;
	size = getnbofchars(n);
	if (n < 0)
	{
		size--;
		n = -n;
		write(fd, "-", 1);
	}
	while (size >= 0)
	{
		tmp = n / nbpwr10(size);
		ft_putchar_fd((tmp + 48), fd);
		n = n - (tmp * nbpwr10(size));
		size--;
	}
}
