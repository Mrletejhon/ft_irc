/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:49:38 by sbres             #+#    #+#             */
/*   Updated: 2014/05/12 23:54:45 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	makenumber(char *str, int start, int size)
{
	int	number;
	int	counter;

	counter = 0;
	number = 0;
	while (counter < size)
	{
		number = (number * 10) + (str[start] - 48);
		counter++;
		start++;
	}
	return (number);
}

static int	getsizenum(char *str, int counter)
{
	int	size;

	size = 0;
	while (str[counter] >= 48 && str[counter] <= 57)
	{
		size++;
		counter++;
	}
	return (size);
}

static int	getnumber(char *str, int counter)
{
	int	size;
	int	number;
	int	negative;

	negative = 0;
	if ((str[counter + 1] <= 47 || str[counter + 1] >= 58)
		&& (str[counter] <= 47 || str[counter] >= 58))
		return (0);
	if (str[counter] == 45 || str[counter] == 43)
	{
		if (str[counter] == 45)
			negative = 1;
		counter++;
	}
	size = getsizenum(str, counter);
	number = makenumber(str, counter, size);
	if (negative == 1)
		number = number * -1;
	return (number);
}

int			ft_atoi(const char *str)
{
	int	counter;
	int	number;

	number = 0;
	counter = 0;
	while (str[counter] == ' ' || str[counter] == '\n'
			|| str[counter] == '\v' || str[counter] == '\t'
			|| str[counter] == '\r' || str[counter] == '\f')
		counter++;
	if ((str[counter] >= 48 && str[counter] <= 57)
		|| str[counter] == 45 || str[counter] == 43)
		number = getnumber ((char*)str, counter);
	return (number);
}
