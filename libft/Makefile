# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarks <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/22 09:56:06 by jmarks            #+#    #+#              #
#    Updated: 2022/05/02 17:37:21 by jmarks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS=ft_strlen.c \
	ft_putstr_fd.c \
	ft_putchar_fd.c \

OBJS=$(SRCS:.c=.o)

CC=gcc

CFLAGS=-Wall -Wextra -Werror

NAME=libft.a

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)
	
%.o: %.c
		$(CC) -c $(CFLAGS) -o $@ $<

clean:
		rm -f $(OBJS)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

.PHONY:	all	clean fclean re
