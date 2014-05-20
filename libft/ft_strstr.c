/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 19:34:24 by sbres             #+#    #+#             */
/*   Updated: 2013/11/27 12:23:06 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
char	*ft_strstr(const char *str1, const char *str2)
{
	int		counter1;
	int		counter2;
	char	*strcp;

	strcp = (char*)str1;
	counter1 = 0;
	counter2 = 0;
	while (str1[counter1] != '\0')
	{
		if (str2[counter2] == '\0')
		{
			return (&strcp[counter1 - counter2]);
		}
		if (str1[counter1] == str2[counter2])
			counter2++;
		else
		{
			counter1 = counter1 - counter2;
			counter2 = 0;
		}
		counter1++;
	}
	if (str2[counter2] == '\0')
		return (&strcp[counter1 - counter2]);
	return (NULL);
}
