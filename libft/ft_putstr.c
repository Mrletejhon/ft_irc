/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/24 19:14:50 by sbres             #+#    #+#             */
/*   Updated: 2013/12/01 15:19:27 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putstr(char const *s)
{
	int	counter;

	counter = 0;
	if (s == NULL)
	{
		ft_putstr("(NULL)");
		return ;
	}
	while (s[counter] != '\0')
	{
		write(1, &s[counter], 1);
		counter++;
	}
}
