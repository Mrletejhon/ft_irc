/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 19:34:24 by sbres             #+#    #+#             */
/*   Updated: 2013/12/01 15:46:54 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>
char	*ft_strnstr(const char *str1, const char *str2, size_t nb)
{
	int	counter1;
	int	counter2;

	counter1 = 0;
	counter2 = 0;
	if (str2 == NULL)
		return ((char*)str1);
	while (nb > 0 && str1[counter1] != '\0')
	{
		if (str2[counter2] == '\0')
			return ((char*)&str1[counter1 - counter2]);
		if (str1[counter1] == str2[counter2])
			counter2++;
		else
		{
			counter1 = counter1 - counter2;
			counter2 = 0;
		}
		counter1++;
		nb--;
	}
	if (str2[counter2] == '\0')
		return ((char*)&str1[counter1 - counter2]);
	else
		return (NULL);
}
