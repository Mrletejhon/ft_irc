/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 16:59:53 by sbres             #+#    #+#             */
/*   Updated: 2013/12/01 15:36:01 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
void	ft_striter(char *s, void (*f)(char *))
{
	int	counter;

	counter = 0;
	if (s == NULL || f == NULL)
		return ;
	while (s[counter] != '\0')
	{
		f(&s[counter]);
		counter++;
	}
}
