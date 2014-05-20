/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 15:56:44 by sbres             #+#    #+#             */
/*   Updated: 2013/11/25 21:18:22 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include "includes/libft.h"
size_t	ft_strlcat(char *str1, const char *str2, size_t size)
{
	size_t	realsize;
	size_t	counter;

	counter = 0;
	realsize = ft_strlen(str1);
	if (realsize > size)
		return (size + ft_strlen((char*)str2));
	while (str2[counter] != '\0' && counter + realsize < size - 1)
	{
		str1[realsize + counter] = str2[counter];
		counter++;
	}
	str1[realsize + counter] = '\0';
	return (realsize + ft_strlen((char*)str2));
}
