/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_user.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/21 07:24:27 by sbres             #+#    #+#             */
/*   Updated: 2014/05/24 01:56:04 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"
#include <stdlib.h>
#include <libft.h>
#include <stdio.h>

void	ft_create_user(t_env *env, int fd)
{
	t_user		*tmp;
	t_user		*head;
	char		*file_des;

	head = env->users_list;
	tmp = (t_user *)malloc(sizeof(t_user));
	tmp->next = NULL;
	tmp->fd = fd;
	file_des = ft_itoa(fd);
	tmp->username = ft_strjoin("anonymous_", file_des);
	free(file_des);
	if (head == NULL)
		env->users_list = tmp;
	else
	{
		while (head->next != NULL)
			head = head->next;
		head->next = tmp;
	}
}

void	ft_delete_user(t_env *env, int fd)
{
	t_user		*tmp;
	t_user		*old;

	tmp = env->users_list;
	old = NULL;
	while (tmp != NULL)
	{
		if (tmp->fd == fd)
		{
			free(tmp->username);
			if (old == NULL)
				env->users_list = tmp->next;
			else
				old->next = tmp->next;
			free(tmp);
			tmp = NULL;
			return ;
		}
		old = tmp;
		tmp = tmp->next;
	}
	printf("No user found wtf ?\n");
}
