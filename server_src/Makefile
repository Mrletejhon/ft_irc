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

CC = gcc
CFLAGS = -I ../libft/includes/ #-Wall -Werror -Wextra 
NAME = serveur
SRCS = main.c ft_handle_input.c ft_create_user.c ft_initserver.c hf_join.c \
		add_to_send.c hf_who.c hf_help.c hf_msg.c hf_msgch.c hf_nick.c \
		hf_quit.c hf_quit_chanel.c ft_send_data.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -g3 -o $(NAME) $(OBJS) -L ../libft/ -lft

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

debug: fclean
	$(CC) -g3 $(CFLAGS) $(SRCS) -L libft/ -lft
	gdb $(NAME)

.PHONY: all clean re fclean
