/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 13:31:32 by sbres             #+#    #+#             */
/*   Updated: 2013/12/05 22:12:18 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "includes/libft.h"

size_t	ft_numwords(const char *s, char c)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[i] != c) || (s[i] != c && s[i - 1] == c))
			res++;
		i++;
	}
	return (res);
}

size_t	ft_splits(char **str, const char *s, char c, size_t i)
{
	size_t	n;
	size_t	len;

	n = 0;
	len = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
		{
			len++;
			i++;
		}
		if (len > 0)
		{
			str[n] = ft_strsub(s, i - len, len);
			n++;
			len = 0;
		}
		else
			i++;
	}
	return (n);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**str;
	size_t	n;

	str = NULL;
	if (s)
	{
		n = (ft_numwords(s, c));
		str = (char **)malloc((n + 1) * sizeof(char *));
		if (str)
		{
			ft_splits(str, s, c, 0);
			str[n] = NULL;
		}
	}
	return (str);
}
