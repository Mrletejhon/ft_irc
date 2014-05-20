/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:51:58 by sbres             #+#    #+#             */
/*   Updated: 2014/05/12 23:57:43 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *ptr, int valuetobeset, size_t num)
{
	size_t	counter;
	char	*str;

	str = (char*)ptr;
	counter = 0;
	while (counter < num)
	{
		str[counter] = valuetobeset;
		counter++;
	}
	return (ptr);
}
