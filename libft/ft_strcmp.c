/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 18:31:14 by sbres             #+#    #+#             */
/*   Updated: 2014/05/13 11:08:18 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strcmp(const char *str1, const char *str2)
{
	int	counter;

	counter = 0;
	if (str1 == NULL || str2 == NULL)
		return (1);
	while (str1[counter] != '\0' && str2[counter] != '\0'
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
