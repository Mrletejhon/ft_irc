/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 13:57:41 by sbres             #+#    #+#             */
/*   Updated: 2014/05/13 02:17:23 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *str1, const char *str2, int end)
{
	int	counter;
	int	finish;

	finish = 0;
	counter = 0;
	while (end)
	{
		if (str2[counter] == '\0')
			finish = 1;
		if (finish == 0)
			str1[counter] = str2[counter];
		else
			str1[counter] = '\0';
		counter++;
		end--;
	}
	return (str1);
}
