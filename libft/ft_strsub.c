/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 18:11:17 by sbres             #+#    #+#             */
/*   Updated: 2013/11/27 19:51:31 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	index;

	index = 0;
	if (s != NULL)
	{
		string = ft_strnew(len);
		if (string == NULL)
			return (string);
		while (len > 0)
		{
			string[index] = s[start];
			start++;
			index++;
			len--;
		}
		return (string);
	}
	return (NULL);
}
