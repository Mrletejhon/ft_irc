/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/20 10:05:12 by sbres             #+#    #+#             */
/*   Updated: 2014/05/20 15:37:16 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERVER_H

typedef struct			s_env;
{
	int					stream_socket;
	struct sockaddr_in	addr;
	struct fd_set		master;
	struct fd_set		working;
	int					fd_max;
	struct timeval		timeout;
}						t_env;

# define SERVER_H
#endif