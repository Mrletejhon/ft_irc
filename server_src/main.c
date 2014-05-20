/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/20 10:05:08 by sbres             #+#    #+#             */
/*   Updated: 2014/05/20 19:09:42 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"

void	ussage(char *str)
{
	printf("ussage ./%s PORT example ./%s 35050\n", str, str);
	exit(0);
}

void	dispach_client(t_env *env)
{
	int		i;

	i = 0;
}

void	ft_handle_server(t_env *env)
{
	int		ret;

	while (1)
	{
		memcpy(&(env->working), &(env->master), sizeof(env->master));
		ret = select(env->fd_max + 1, &(env->working), NULL, NULL, &(env->timeout));
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
	env = ft_init_server(argv[1]);
	ft_handle_server(env);
	return (0);
}