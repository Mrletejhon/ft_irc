#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sbres <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/11/20 16:00:27 by sbres             #+#    #+#              #
#    Updated: 2013/12/02 16:45:27 by sbres            ###   ########.fr        #
#                                                                              #
#******************************************************************************#
FLAGS = -Wall -Wextra -Werror
CC = gcc
NAME = libft.a

SRCS = ft_isalnum.c ft_strncat.c ft_isalpha.c ft_strcat.c ft_strncpy.c \
	ft_isascii.c ft_strcpy.c ft_strstr.c ft_isdigit.c ft_strdup.c ft_tolower.c \
	ft_atoi.c ft_isprint.c ft_strlen.c ft_toupper.c ft_memset.c ft_bzero.c \
	ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strcmp.c \
	ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strnstr.c ft_putchar.c \
	ft_putstr.c ft_strlcat.c ft_memdel.c ft_memalloc.c ft_strnew.c\
	ft_strdel.c ft_strclr.c ft_striter.c ft_striteri.c ft_strmap.c\
	ft_strmapi.c ft_strequ.c ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c\
	ft_itoa.c ft_putendl.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c\
	ft_putendl_fd.c ft_putnbr_fd.c ft_strsplit.c get_next_line.c\
	ft_set_zero.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) -c $(FLAGS) $(SRCS)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "libft done :)"

clean:
	@rm -f $(OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean