#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbres <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/02/17 18:56:49 by sbres             #+#    #+#              #
#    Updated: 2014/02/17 18:56:53 by sbres            ###   ########.fr        #
#                                                                              #
#******************************************************************************#

all:
	make -C libft/
	make -C client_src/
	make -C server_src/

clean:
	make -C libft/ clean
	make -C client_src/ clean
	make -C server_src/ clean

fclean: clean
	make -C libft/ fclean
	make -C client_src/ fclean
	make -C server_src/ fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean re fclean
