# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 14:50:27 by mghalmi           #+#    #+#              #
#    Updated: 2023/04/13 22:35:59 by mghalmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Push_swap

# SRC = Push_swap.c
SRC = test.c 
UTILS = swaping.c pushing.c read_data.c rotate.c reverse_rotate.c sorting3AndLess.c sorting5AndLess.c \
		sorting100AndLess.c sorting500AndLess.c index.c justSort.c

HEADER = push_swap.h

LIBFTDIR = libft/

PRINTFDIR = ft_printf/

all : $(NAME)

$(NAME) : $(HEADER)
	# make re -C $(LIBFTDIR)
	# make bonus -C $(LIBFTDIR)
	# make re -C $(PRINTFDIR)
	cc -Wall -Wextra -Werror $(SRC) $(UTILS) libft/libft.a ft_printf/libftprintf.a -o $(NAME)

nums :
	cc -Wall -Wextra -Werror generate_numbers.c -o numbers

clean :
	make clean -C $(LIBFTDIR)
	make clean -C $(PRINTFDIR)

fclean : 
	# make fclean -C $(LIBFTDIR)
	# make fclean -C $(PRINTFDIR)
	rm -rf $(NAME)
	rm -rf numbers

re : fclean all