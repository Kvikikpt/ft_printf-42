# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnikia <cnikia@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/08 18:43:48 by cnikia            #+#    #+#              #
#    Updated: 2019/08/31 13:36:26 by cnikia           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft.c flag_digit.c pf_struct.c flag_str.c add.c final_print.c flag_double.c final_print_c.c

INCLUDES = ft_printf.h

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c $(INCLUDES)
	gcc -Wall -Wextra -Werror -c $<

clean:
	/bin/rm -f $(OBJ)
	/bin/rm -f #*#
	/bin/rm -f *~
	/bin/rm -f *.gch
	/bin/rm -f a.out

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
