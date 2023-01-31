# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mumujic <mumujic@student.42Lausanne.ch>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/31 11:06:41 by mumujic           #+#    #+#              #
#    Updated: 2023/01/31 11:06:41 by mumujic          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a
CFLAGS	=	-Wall -Werror -Wextra -c
CC		=	gcc
RM		=	rm -f
AR		=	ar -rcs
FILES	=	ft_printf.c \
			ft_base_print.c \
			ft_char_print.c \
			ft_ptr_print.c \
			ft_str_print.c \
			ft_uns_print.c
OBJ		=	$(FILES:.c=.o)

all: $(NAME)

$(NAME):
		$(CC) $(CFLAGS) $(FILES)
		$(AR) $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re