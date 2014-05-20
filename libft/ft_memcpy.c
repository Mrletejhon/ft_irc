/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 13:37:00 by sbres             #+#    #+#             */
/*   Updated: 2013/11/25 12:16:20 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
void	*ft_memcpy(void *destination, const void *source, size_t num)
{
	char	*str1;
	char	*str2;
	size_t	counter;

	counter = 0;
	str1 = (char*)destination;
	str2 = (char*)source;
	while (counter < num)
	{
		str1[counter] = str2[counter];
		counter++;
	}
	return (destination);
}
