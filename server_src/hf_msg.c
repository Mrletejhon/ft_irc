/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hf_msg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/21 20:06:40 by sbres             #+#    #+#             */
/*   Updated: 2014/05/24 02:06:55 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"
#include <stdlib.h>

char		*get_first_word(char *str)
{
	int		counter;
	char	*username;

	counter = 0;
	while (str[counter] != ' ' && str[counter] != '\0')
		counter++;
	username = (char *)malloc(sizeof(char) * (counter + 1));
	counter = 0;
	while (str[counter] != ' ' && str[counter] != '\0')
	{
		username[counter] = str[counter];
		counter++;
	}
	username[counter] = '\0';
	return (username);
}

int			get_client_fd(char *username, t_user *users)
{
	t_user	*tmp;

	tmp = users;
	while (tmp != NULL)
	{
		if (ft_strcmp(tmp->username, username) == 0)
		{
			return (tmp->fd);
		}
		tmp = tmp->next;
	}
	return (-1);
}

void		hf_msg(t_env *env, char *str, int fd)
{
	char	*usr;
	int		fdr;

	str = str + 5;
	usr = get_first_word(str);
	str = str + ft_strlen(usr) + 1;
	fdr = get_client_fd(usr, env->users_list);
	if (fdr == -1)
		add_to_queue(env, "There is no such user", fd);
	else
	{
		add_to_queue(env, str, fdr);
	}
	free(usr);
}
