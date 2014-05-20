/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 12:58:45 by sbres             #+#    #+#             */
/*   Updated: 2014/05/13 05:02:42 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <strings.h>

void	ft_bzero(void *str, size_t nb)
{
	size_t	counter;
	char	*str1;

	str1 = (char*)str;
	counter = 0;
	while (counter < nb)
	{
		str1[counter] = 0;
		counter++;
	}
	return ;
}
