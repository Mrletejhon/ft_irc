/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hf_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/21 10:40:05 by sbres             #+#    #+#             */
/*   Updated: 2014/05/24 02:02:29 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"
#include <stdlib.h>
#include <libft.h>
#include <stdio.h>

t_usercont		*ft_add_user(t_user *user)
{
	t_usercont	*tmp;

	tmp = (t_usercont *)malloc(sizeof(t_usercont));
	tmp->user = user;
	tmp->next = NULL;
}

t_chat_rooms	*create_and_join(int fd, t_env *env, char *str)
{
	t_chat_rooms	*tmp;
	t_user			*tmp_u;

	tmp = (t_chat_rooms *)malloc(sizeof(t_chat_rooms));
	tmp->next = NULL;
	tmp->name = ft_strdup(str);
	tmp_u = env->users_list;
	while (tmp_u != NULL)
	{
		if (tmp_u->fd == fd)
			break;
		tmp_u = tmp_u->next;
	}
	tmp->users = ft_add_user(tmp_u);
	return (tmp);
}

void			add_user_to_room(int fd, t_env *env, t_chat_rooms *room)
{
	t_user			*tmp_u;
	t_usercont		*tmp_uc;

	tmp_u = env->users_list;
	while (tmp_u != NULL)
	{
		if (tmp_u->fd == fd)
			break;
		tmp_u = tmp_u->next;
	}
	tmp_uc = room->users;
	while (tmp_uc->next != NULL)
		tmp_uc = tmp_uc->next;
	tmp_uc->next = ft_add_user(tmp_u);
}

void			hf_join(t_env *env, char *str, int fd)
{
	t_chat_rooms	*tmp;
	t_chat_rooms	*new_room;
	t_chat_rooms	*last;

	tmp = env->rooms_list;
	str = str + 6;
	if (tmp == NULL)
	{
		env->rooms_list = create_and_join(fd, env, str);
		printf("Creating a new room called %d\n", str );
		//create new & 
	}
	else
	{
		while (tmp != NULL)
		{
			if (ft_strcmp(tmp->name, str) == 0)
			{
				add_user_to_room(fd, env, tmp);
				printf("Adding user to room called %d\n", str );
				break;
			}
			if (tmp->next == NULL)
				last = tmp;
			tmp = tmp->next;
		}
		if (tmp == NULL)
		{
			last->next = create_and_join(fd, env, str);
			printf("Creating a new room called %d\n", str );
		}
	}
	printf("JOIN !\n");
}
