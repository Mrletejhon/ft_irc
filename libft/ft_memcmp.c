/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 15:54:24 by sbres             #+#    #+#             */
/*   Updated: 2014/05/13 02:11:37 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_memcmp(const void *str1, const void *str2, size_t num)
{
	size_t			counter;
	unsigned char	*str11;
	unsigned char	*str22;

	str11 = (unsigned char*)str1;
	str22 = (unsigned char*)str2;
	counter = 0;
	while (counter < num)
	{
		if (str22[counter] != str11[counter])
			return (str11[counter] - str22[counter]);
		counter++;
	}
	return (0);
}
