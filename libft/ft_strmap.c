/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/25 16:59:53 by sbres             #+#    #+#             */
/*   Updated: 2013/12/02 17:06:28 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "includes/libft.h"
char	*ft_strmap(char const *s, char (*f)(char))
{
	int		counter;
	char	*str;

	if (s == NULL || f == NULL)
		return ((char*)s);
	str = (char*)malloc(ft_strlen(s) * sizeof(char));
	counter = 0;
	while (s[counter] != '\0')
	{
		str[counter] = f(s[counter]);
		counter++;
	}
	return (str);
}
