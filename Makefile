# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: moel-had <moel-had@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/13 02:54:52 by moel-had          #+#    #+#              #
#    Updated: 2021/11/19 05:44:07 by moel-had         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_memset.c ft_memchr.c ft_strchr.c ft_strjoin.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_itoa.c ft_split.c\
ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memcpy.c ft_memmove.c ft_strlen.c ft_strmapi.c\

#ft_strncmp.c ft_strlcpy.c ft_strdup.c ft_substr.c

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

CC = gcc

OBJ = $(SRCS:%.c=%.o)


all: $(NAME)

$(NAME): $(OBJ)
	@ar -rcs $(NAME) $(OBJ)

%.o:%.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm $(NAME)

re: fclean all
