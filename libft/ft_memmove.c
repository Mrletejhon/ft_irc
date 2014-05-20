/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:18:59 by sbres             #+#    #+#             */
/*   Updated: 2013/11/25 12:18:31 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdlib.h>
void	*ft_memmove(void *dest, const void *source, size_t num)
{
	char	*str1;
	char	*str2;
	size_t	counter;
	char	*strtmp;

	strtmp = malloc(num * sizeof(char));
	counter = 0;
	str1 = (char*)dest;
	str2 = (char*)source;
	while (counter < num)
	{
		strtmp[counter] = str2[counter];
		counter++;
	}
	counter = 0;
	while (counter < num)
	{
		str1[counter] = strtmp[counter];
		counter++;
	}
	return (dest);
}
