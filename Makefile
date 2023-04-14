# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 14:50:27 by mghalmi           #+#    #+#              #
#    Updated: 2023/04/14 20:17:13 by mghalmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRC = Push_swap.c swaping.c pushing.c read_data.c rotate.c reverse_rotate.c sorting3AndLess.c \
		sorting5AndLess.c sorting100AndLess.c sorting500AndLess.c index.c justSort.c

HEADER = push_swap.h

LIBFTDIR = libft/

PRINTFDIR = ft_printf/

OBJ = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	make re -C $(LIBFTDIR)
	make bonus -C $(LIBFTDIR)
	make re -C $(PRINTFDIR)
	cc -Wall -Wextra -Werror $(SRC) $(UTILS) libft/libft.a ft_printf/libftprintf.a -o $(NAME)

%.o: %.c $(HEADER)
	cc -Wall -Wextra -Werror -c $<

clean :
	make clean -C $(LIBFTDIR)
	make clean -C $(PRINTFDIR)
	rm -rf $(OBJ)

fclean : clean
	make fclean -C $(LIBFTDIR)
	make fclean -C $(PRINTFDIR)
	rm -rf $(NAME)

re : fclean all