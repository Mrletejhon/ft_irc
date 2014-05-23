/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hf_help.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbres <sbres@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/23 08:41:46 by sbres             #+#    #+#             */
/*   Updated: 2014/05/23 08:49:13 by sbres            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	hf_help(t_env *env, char *str, int fd)
{
	add_to_queue(env, "Server: Here they are some comands", fd);
	add_to_queue(env, "\t/join CHANEL : to join or create a chanel", fd);
	add_to_queue(env, "\t/nick YOUR_NICK : to set your nick", fd);
	add_to_queue(env, "\t/who CHANEL : to know who is on the chanel", fd);
	add_to_queue(env, "\t/msg NICK : send a private message to the nick", fd);
	add_to_queue(env, "\t/leave CHANEL : to leave a selected chanel", fd);
	add_to_queue(env, "\t/help to show this message :)", fd);
	add_to_queue(env, "\t/msgch CHANEL : send a message in the selecte chanel", fd);
	add_to_queue(env, "\t/quit to exit", fd);
	return ;
	(void)str;
}