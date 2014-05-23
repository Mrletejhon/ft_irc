/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hf_msgch.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/23 08:50:35 by sbres             #+#    #+#             */
/*   Updated: 2014/05/23 09:05:40 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"
#include <libft.h>

void		hf_msgch(t_env *env, char *str, int fd)
{//verifier que on est bien dans la salle ?
	char		*chanel
	rooms_list	*tmp;
	t_usercont	*utmp;

	str = str + 7;
	chanel = get_first_word(str);
	tmp = env->rooms_list;
	while (tmp != NULL)
	{
		if (ft_strcmp(tmp->name, chanel) == 0)
			break;
		tmp = tmp->next;
	}
	if (tmp == NULL)
	{
		add_to_queue(env, "There is no such room", fd);		
		return ;
	}
	str = str + ft_strlen(chanel) + 1;
	free(chanel);
	utmp = tmp->users;
	//rajouter le nom de l'utilisateur au debut du message
	while (utmp != NULL)
	{
		if (fd != utmp->user->fd)
		add_to_queue(env, str, utmp->user->fd);
		utmp = utmp->next;
	}
}