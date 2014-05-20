/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 13:52:01 by sbres             #+#    #+#             */
/*   Updated: 2013/12/01 15:05:35 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <string.h>
void	*ft_memalloc(size_t size)
{
	char	*tmp;
	size_t	counter;

	counter = 0;
	tmp = (char*)malloc(size);
	if (tmp == NULL)
		return (NULL);
	while (size > counter)
	{
		tmp[counter] = 0;
		counter++;
	}
	return (tmp);
}
