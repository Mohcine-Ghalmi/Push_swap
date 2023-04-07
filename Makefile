# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sleeps <sleeps@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 14:50:27 by mghalmi           #+#    #+#              #
#    Updated: 2023/04/07 18:15:05 by sleeps           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Push_swap

# SRC = Push_swap.c
SRC = test.c 
UTILS = swaping.c pushing.c read_data.c rotate.c reverse_rotate.c sorting3.c sorting45.c

HEADER = push_swap.h

LIBFTDIR = libft/

PRINTFDIR = ft_printf/

all : $(NAME)

$(NAME) : $(HEADER)
	# make re -C $(LIBFTDIR)
	# make bonus -C $(LIBFTDIR)
	# make re -C $(PRINTFDIR)
	cc -Wall -Wextra -Werror $(SRC) $(UTILS) libft/libft.a ft_printf/libftprintf.a -o $(NAME)

clean :
	# make clean -C $(LIBFTDIR)
	# make clean -C $(PRINTFDIR)

fclean : 
	# make fclean -C $(LIBFTDIR)
	# make fclean -C $(PRINTFDIR)
	rm -rf $(NAME)

re : fclean all