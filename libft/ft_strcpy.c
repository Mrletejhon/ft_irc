/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 13:29:05 by sbres             #+#    #+#             */
/*   Updated: 2014/05/17 06:46:36 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *str1, const char *str2)
{
	int	counter;

	counter = 0;
	while (str2[counter] != '\0')
	{
		str1[counter] = str2[counter];
		counter++;
	}
	str1[counter] = '\0';
	return (str1);
}
