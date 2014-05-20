/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 19:28:03 by sbres             #+#    #+#             */
/*   Updated: 2014/05/13 05:16:05 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(const char *str1, const char *str2, size_t nb)
{
	size_t	counter;

	counter = 0;
	while (counter < nb && str1[counter] != '\0' && str2[counter] != '\0'
			&& str1[counter] == str2[counter])
		counter++;
	if (str1[counter] != str2[counter])
	{
		if (str1[counter] > str2[counter])
		{
			return (1);
		}
		else
		{
			return (1);
		}
	}
	else
		return (0);
}
