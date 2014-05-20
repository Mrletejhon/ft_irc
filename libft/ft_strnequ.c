/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 17:55:02 by sbres             #+#    #+#             */
/*   Updated: 2014/05/12 23:51:12 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	counter;

	counter = 0;
	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL && s2 == NULL)
			return (1);
		else
			return (0);
	}
	while (s1[counter] != '\0' && s2[counter] != '\0'
			&& s1[counter] == s2[counter] && counter < n - 1)
		counter++;
	if (s1[counter] == s2[counter])
		return (1);
	else
		return (0);
}
