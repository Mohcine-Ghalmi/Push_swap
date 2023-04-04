# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 14:50:27 by mghalmi           #+#    #+#              #
#    Updated: 2023/04/04 17:31:39 by mghalmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Push_swap

# SRC = Push_swap.c read_data.c
SRC = test.c swaping.c pushing.c read_data.c rotate.c reverse_rotate.c

HEADER = push_swap.h

LIBFTDIR = libft/

PRINTFDIR = ft_printf/

all : $(NAME)

$(NAME) : $(HEADER)
	# make re -C $(LIBFTDIR)
	# make bonus -C $(LIBFTDIR)
	# make re -C $(PRINTFDIR)
	cc -Wall -Wextra -Werror $(SRC) libft/libft.a ft_printf/libftprintf.a -o $(NAME)

clean :
	# make clean -C $(LIBFTDIR)
	# make clean -C $(PRINTFDIR)

fclean : 
	# make fclean -C $(LIBFTDIR)
	# make fclean -C $(PRINTFDIR)
	rm -rf $(NAME)

re : fclean all