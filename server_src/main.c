/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/20 10:05:08 by sbres             #+#    #+#             */
/*   Updated: 2014/05/21 18:24:11 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"
#include <stdlib.h>
#include <stdio.h>

void	ussage(char *str)
{
	printf("ussage %s PORT example %s 35050\n", str, str);
	exit(0);
}

void	dispach_client(t_env *env, int ret)
{
	int		i;
	int		fd;

	i = 0;
	while (i <= env->fd_max && ret > 0)
	{
		if (FD_ISSET(i, &(env->working_in)))
		{
			printf("  Listening socket is readable = %d\n", i);
			if (i == env->stream_socket)
			{
				printf("New conection :D !\n");
				fd = accept(env->stream_socket, NULL, NULL); //veriffier si sa marhce bien If blah blah
				FD_SET(fd, &(env->master_in));
				FD_SET(fd, &(env->master_out));
				if (fd > env->fd_max)
					env->fd_max = fd;
				ft_create_user(env, fd);
			}
			else
			{
				ft_handle_input(env, fd);
				//ici on recoit un peut de data quoi
				// ! important verifier si le recv == 0
			}
			ret--;
		}
		else if (FD_ISSET(i, &(env->working_out)))
		{
			//printf("  Writetable socket is readable = %d\n", i);
			//ici du coup on peut ecrire xd
			ret--;
		}
		i++;
	}
}

void	ft_handle_server(t_env *env)
{
	int		ret;

	while (1)
	{
		memcpy(&(env->working_in), &(env->master_in), sizeof(env->master_in));
		memcpy(&(env->working_out), &(env->master_out), sizeof(env->master_out));
		ret = select(env->fd_max + 1, &(env->working_in), &(env->working_out), NULL, &(env->timeout));
		dispach_client(env, ret);
		
		/*
		** Handle the stuff.
		*/
	}
}

int		main(int argn, char **argv)
{
	t_env	*env;

	if (argn != 2)
		ussage(argv[0]);
	printf("Starting\n Initialisation ");
	env = ft_init_server(argv[1]);
	printf("OK\n waiting for conections");
	ft_handle_server(env);
	return (0);
}
