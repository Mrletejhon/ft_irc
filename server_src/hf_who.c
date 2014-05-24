/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hf_who.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/21 19:22:48 by sbres             #+#    #+#             */
/*   Updated: 2014/05/24 02:02:47 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_make_responce(t_env *env, t_chat_rooms *tmp, int fd)
{
	t_usercont		*users;
	int				total_size;
	char			*message;

	users = tmp->users;
	total_size = -1;
	while (users != NULL)
	{
		total_size = total_size + ft_strlen(users->user->username) + 1;
		users = users->next;
	}
	message = (char *)malloc(sizeof(char) * (total_size + 1));
	message[0] = '\0';
	users = tmp->users;
	while (users != NULL)
	{
		ft_strcat(message, users->user->username);
		if (users->next != NULL)
			ft_strcat(message, " ");
		users = users->next;
	}
	add_to_queue(env, message, fd);
	free(message);
}

void		hf_who(t_env *env, char *str, int fd)
{
	t_chat_rooms	*tmp;

	tmp = env->rooms_list;
	str = str + 5;
	while (tmp != NULL)
	{
		if (ft_strcmp(tmp->name, str) == 0)
		{
			ft_make_responce(env, tmp, fd);
			return;
		}
		tmp = tmp->next;
	}
	add_to_queue(env, "There is no such room", fd);
}
