/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:28:04 by sbres             #+#    #+#             */
/*   Updated: 2014/05/13 02:18:09 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *str, int cha)
{
	int	last;
	int	counter;

	counter = 0;
	last = -1;
	while (str[counter] != '\0')
	{
		if (str[counter] == cha)
			last = counter;
		counter++;
	}
	if (str[counter] == cha)
		last = counter;
	if (last >= 0)
		return ((char*)&str[last]);
	else
		return (NULL);
}
