/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_zero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/04 19:29:05 by sbres             #+#    #+#             */
/*   Updated: 2013/12/04 19:29:06 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "includes/libft.h"
int		*ft_set_zero(int size)
{
	int	*counter;

	counter = (int*)malloc(size * sizeof(int));
	while (size != 0)
	{
		counter[size - 1] = 0;
		size--;
	}
	return (counter);
}
