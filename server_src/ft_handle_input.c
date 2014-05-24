/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_input.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/21 07:35:18 by sbres             #+#    #+#             */
/*   Updated: 2014/05/24 02:04:06 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "server.h"
#include <libft.h>
#include <stdio.h>

int		ft_analyse(char *str)
{
	static char		**comands = NULL;
	int				counter;

	counter = 0;
	if (comands == NULL)
		comands = ft_strsplit(COMANDS, '|');
	while (comands[counter] != NULL)
	{
		if (!ft_strncmp(str, comands[counter], (ft_strlen(comands[counter]) - 1)))
			return (counter);
		counter++;
	}
	return (counter);
}

void	(* ft_init_fontions(void))(t_env *, char *, int)
{
	void		(*handelers[8])(t_env *, char *, int);

	handelers[0] = hf_join;
	handelers[1] = hf_nick;
	handelers[2] = hf_who;
	handelers[3] = hf_msg;
	handelers[4] = hf_leave;
	handelers[5] = hf_quit;//pas finis
	handelers[6] = hf_help;
	handelers[7] = hf_msgch;
	return ((*handelers));
}

void	ft_handle_input(t_env *env, int fd)
{
	char			buff[1024];
	int				rc;
	static void		(*handelers[8])(t_env *, char *, int) = {NULL};

	if (handelers[1] == NULL)
		(*handelers) = ft_init_fontions();
	rc = recv(fd, buff, sizeof(buff), 0);// Todo check if fail
	buff[rc] = '\0';
	if (rc == 0)
	{
		printf("User conected in port %d deleted\n", fd);
		ft_delete_user(env, fd);
		FD_CLR(fd, &(env->master_in));
		FD_CLR(fd, &(env->master_out));
		return ;
	}
	rc = ft_analyse(buff);
	printf("Funtion we are calling to handle is %d\n", rc);
	(*handelers[rc])(env, buff, fd);
}