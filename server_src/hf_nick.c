/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hf_nick.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/21 18:49:07 by sbres             #+#    #+#             */
/*   Updated: 2014/05/21 19:21:58 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"
#include <libft.h>

void	hf_nick(t_env *env, char *str, int fd)
{
	t_user	*tmp;

	tmp = env->users_list;
	str = str + 6;
	while (tmp != NULL)
	{
		if (tmp->fd == fd)
		{
			free(tmp->username);
			tmp->username = ft_strdup(str);
			break ;
		}
		tmp = tmp->next;
	}
}