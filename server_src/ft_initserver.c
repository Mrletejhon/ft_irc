/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initserver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/20 10:07:49 by sbres             #+#    #+#             */
/*   Updated: 2014/05/21 10:10:14 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"
#include <stdlib.h>
#include <libft.h>
#include <stdio.h>
#include <sys/socket.h>

void	ft_socket_error()
{
	printf("socket() failed");
	perror("socket() failed");
	exit(-1);
}

void	ft_setsockopt_error()
{
	printf("setsockopt() failed");
	//perror("socket() failed");
	exit(-1);
}

void	ft_bind_error(int fd)
{
	printf("bind() failed");
	close(fd);
	//perror("socket() failed");
	exit(-1);
}

void	ft_listen_error(int fd)
{
	printf("listen() failed");
	close(fd);
	//perror("socket() failed");
	exit(-1);
}

t_env	*ft_init_server(char *port)
{
	t_env	*env;
	int		on;

	on = 1;
	env = (t_env *)malloc(sizeof(t_env));
	env->users_list= NULL;
	if ((env->stream_socket = socket(AF_INET, SOCK_STREAM, 0)) < 0)
		ft_socket_error();
	if (setsockopt(env->stream_socket, SOL_SOCKET,  SO_REUSEADDR, (char *)&on, sizeof(on)) < 0)
		ft_setsockopt_error();
	ft_memset(&(env->addr), 0, sizeof(env->addr));
	env->addr.sin_family = AF_INET;
	env->addr.sin_addr.s_addr = htonl(INADDR_ANY);
	env->addr.sin_port = htons(ft_atoi(port));
	if (bind(env->stream_socket, (struct sockaddr *)&(env->addr), sizeof(env->addr)) < 0)
		ft_bind_error(env->stream_socket);
	if(listen(env->stream_socket, 32) < 0)
		ft_listen_error(env->stream_socket);
	FD_ZERO(&(env->master_in));
	FD_ZERO(&(env->master_out));
	env->fd_max = env->stream_socket;
	FD_SET(env->stream_socket, &(env->master_in));
	FD_SET(env->stream_socket, &(env->master_out));
	env->timeout.tv_sec = 3 * 60;
	env->timeout.tv_usec = 0;
	return (env);
}
