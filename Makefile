# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jmarks <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/19 14:13:32 by jmarks            #+#    #+#              #
#    Updated: 2022/05/02 16:12:05 by jmarks           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS=ft_printf.c \
	ft_printf_char.c \
	ft_printf_hex.c \
	ft_printf_number.c \
	ft_printf_str.c \
	ft_type_char.c \
	ft_printf_ptr.c \
	ft_printf_u.c \

OBJS=$(SRCS:.c=.o)

CC=gcc

CFLAGS=-Wall -Wextra -Werror

NAME=libftprintf.a

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)
	
%.o: %.c
		$(CC) -c $(CFLAGS) -o $@ $<

clean:
		$(MAKE) clean -C ./libft
		rm -f $(OBJS)

fclean:	clean
		$(MAKE) fclean -C ./libft 
		rm -f $(NAME)

re:	fclean all

.PHONY:	all	clean fclean re
