/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:42:42 by sbres             #+#    #+#             */
/*   Updated: 2013/11/25 18:22:02 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *str1, const char *str2, int num)
{
	int	counter;
	int	counter2;

	counter2 = 0;
	counter = 0;
	while (str1[counter] != '\0')
		counter++;
	while (counter2 < num && str2[counter2] != '\0')
	{
		str1[counter] = str2[counter2];
		counter++;
		counter2++;
	}
	str1[counter] = '\0';
	return (str1);
}
