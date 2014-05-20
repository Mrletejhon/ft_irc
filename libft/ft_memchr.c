/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:42:24 by sbres             #+#    #+#             */
/*   Updated: 2014/05/13 02:08:46 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *str, int chat, size_t num)
{
	char	*str1;
	size_t	counter;

	counter = 0;
	str1 = (char*)str;
	while (counter < num)
	{
		if (str1[counter] == chat)
			return (&str1[counter]);
		counter++;
	}
	return (NULL);
}
