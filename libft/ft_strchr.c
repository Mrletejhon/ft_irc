/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 18:09:44 by sbres             #+#    #+#             */
/*   Updated: 2014/05/13 02:12:34 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *str, int cha)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (str[counter] == cha)
			return ((char*)&str[counter]);
		counter++;
	}
	if (str[counter] == cha)
		return ((char*)&str[counter]);
	else
		return (NULL);
}
