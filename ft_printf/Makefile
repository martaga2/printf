# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: martaga2 <martaga2@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/05 10:02:27 by martaga2          #+#    #+#              #
#    Updated: 2024/04/04 11:16:45 by martaga2         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Wextra -Werror

FILES = ft_printf.c \
		ft_printchar.c \
		ft_printstr.c \
		ft_printptr.c \
		ft_printunsigned.c \
		ft_printdec.c \
		ft_printhex.c\

OBJS = $(FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS): %.o: %.c
	gcc $(FLAGS) -c $< -o $@

clean: 
	rm -f $(OBJS)

fclean: clean
	rm -f $(OBJS)

re: fclean all

.PHONY = all clean fclean re
