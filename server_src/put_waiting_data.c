/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_waiting_data.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/23 09:06:58 by sbres             #+#    #+#             */
/*   Updated: 2014/05/23 09:15:57 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"

void	put_waiting_data(t_env *env, int fd)
{
	t_tosend	*tmp;
	t_tosend	*one_less;

	one_less = NULL;
	tmp = env->to_send;
	while (tmp != NULL)
	{
		if (tmp->fd == fd)
			break;
		one_less = tmp;
		tmp = tmp->NULL;
	}
	if (tmp == NULL)
		return ;
	if (one_less == NULL)
	{
		env->to_send = tmp->next;
		send(tmp->fd, tmp->message, ft_strlen(tmp->message), 0);//a verrifier

	}
	/*
	** TO - DO
	**	free la structure envoyer dans le cas 2
	*/
}