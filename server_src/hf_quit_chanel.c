/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hf_quit_chanel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/22 20:10:37 by sbres             #+#    #+#             */
/*   Updated: 2014/05/22 20:32:34 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"
#include <libft.h>

void	hf_leave(t_env *env, char *str, int fd)
{
	t_chat_rooms	*rooms_tmp;
	t_usercont		*tmp;
	t_usercont		*before;

	str = str + 12;
	rooms_tmp = env->rooms_list;
	while (rooms_list != NULL)
	{
		if (ft_strcmp(str, rooms_list->name) == 0)
			break;
		rooms_list = rooms_list->next;
	}
	if (rooms_list ==  NULL)
		add_to_queue(env, "Server: There is no such room", fd);
	tmp = rooms_list->users;
	before = NULL;
	while (tmp != NULL)
	{
		if (tmp->user->fd == fd )
			break;
		before = tmp;
		tmp = tmp->next;
	}
	if (before == NULL)
		rooms_list->users = tmp->next;
	else (tmp == NULL)
		add_to_queue(env, "Server: You are not in that room", fd);
	else
		before->next = tmp->next;
	free(tmp);
}
