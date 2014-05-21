/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_to_send.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/21 19:30:24 by sbres             #+#    #+#             */
/*   Updated: 2014/05/21 19:35:44 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"
#include <libft.h>
#include <stdlib.h>

void	add_to_queue(t_env *env, char *str, int fd)
{
	t_tosend	*queue;
	t_tosend	*tmp;

	queue = env->to_send;
	tmp = (t_tosend *)malloc(sizeof(t_tosend));
	tmp->fd = fd;
	tmp->message = ft_strdup(str);
	tmp->next = NULL;
	if (queue == NULL)
		env->to_send = tmp;
	else
	{
		while (queue->next != NULL)
			queue = queue->next;
		queue->next = tmp;
	}
}