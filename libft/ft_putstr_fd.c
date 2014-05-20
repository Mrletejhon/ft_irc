/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 19:38:15 by sbres             #+#    #+#             */
/*   Updated: 2013/11/28 12:49:39 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putstr_fd(char const *s, int fd)
{
	int	counter;

	counter = 0;
	if (s == NULL)
	{
		ft_putstr_fd("Null", fd);
		return ;
	}
	while (s[counter] != '\0')
	{
		write(fd, &s[counter], 1);
		counter++;
	}
}
