/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_send_data.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/23 19:46:20 by sbres             #+#    #+#             */
/*   Updated: 2014/05/23 22:52:07 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"
#include <libft.h>

void	ft_send_and_clean()

void	ft_handle_input(t_env *env, int fd)
{
	t_tosend	*tmp;

	tmp = env->to_send;
	while (tmp != NULL)
	{
		if (tmp->fd == fd)
		{

			break;
		}
		tmp = tmp->next;
	}
}
