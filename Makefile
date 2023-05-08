# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: xeniaherzi <xeniaherzi@student.42.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/01 12:03:54 by xeniaherzi        #+#    #+#              #
#    Updated: 2023/05/08 15:13:37 by xeniaherzi       ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
DIR		= srcs/
CC		= gcc
FLAGS	= -Wall -Wextra -Werror
LIB		= ar rcs

SRCS = 	$(DIR)ft_char.c \
		$(DIR)ft_count_nbr.c \
		$(DIR)ft_int.c \
		$(DIR)ft_printf.c \
		$(DIR)ft_strlen.c \
		$(DIR)ft_unsigned.c \
		$(DIR)hex.c \
		$(DIR)percent.c \
		$(DIR)pointer.c \
		$(DIR)putchar_fd.c \
		$(DIR)putnbr_fd.c \
		$(DIR)putstr_fd.c \
		$(DIR)search.c \
		$(DIR)string.c \

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	$(CC) $(FLAGS) -o $@ -c $<

$(NAME): $(OBJS)
	$(LIB) $@ $^

norm:
	norminette -R CheckDefine

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:	all clean fclean re norm