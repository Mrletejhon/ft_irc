/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 13:03:42 by sbres             #+#    #+#             */
/*   Updated: 2013/12/02 17:07:59 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include "includes/libft.h"
char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	char	*str;

	if (s == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s);
	if (end == 0)
		return ((char*)s);
	end--;
	while ((s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
			&& s[start] != '\0')
		start++;
	while ((s[end] == ' ' || s[end] == '\n' || s[end] == '\t')
			&& end > start)
		end--;
	str = ft_strsub(s, start, end - start + 1);
	str[end - start + 1] = '\0';
	if (str == NULL)
		return (NULL);
	else
		return (str);
}
