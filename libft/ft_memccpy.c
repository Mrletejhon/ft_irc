/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 13:37:00 by sbres             #+#    #+#             */
/*   Updated: 2014/05/12 23:57:19 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memccpy(void *dest, const void *source, int cha, size_t num)
{
	char	*str1;
	char	*str2;
	size_t	counter;

	counter = 0;
	str1 = (char*)dest;
	str2 = (char*)source;
	while (counter < num)
	{
		str1[counter] = str2[counter];
		counter++;
		if (str2[counter - 1] == cha)
			return (&str1[counter]);
	}
	return (NULL);
}
