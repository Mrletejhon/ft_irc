/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 14:24:32 by sbres             #+#    #+#             */
/*   Updated: 2014/05/13 02:08:16 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		getnbofchars(int n)
{
	int	size;
	int	ncp;

	ncp = n;
	size = 1;
	if (n < 0 && n != 0)
	{
		ncp = n * -1;
		size++;
	}
	while (ncp > 9)
	{
		ncp = ncp / 10;
		size++;
	}
	return (size);
}

int		nbpwr10(int	n)
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

void	fillchar(char *str, int size, int n, int counter)
{
	int	tmp;

	while (size > 0)
	{
		tmp = n / nbpwr10(size - 1);
		str[counter] = tmp + 48;
		n = n - (tmp * nbpwr10(size - 1));
		size--;
		counter++;
	}
	str[counter] = '\0';
}

char	*ft_itoa(int n)
{
	int		size;
	int		tmp;
	char	*str;
	int		counter;

	tmp = n;
	size = getnbofchars(tmp);
	str = (char*)malloc((size + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	counter = 0;
	if (n < 0)
	{
		n = -n;
		str[counter] = '-';
		counter++;
		size--;
	}
	fillchar(str, size, n, counter);
	return (str);
}
