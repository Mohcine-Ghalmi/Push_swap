# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mghalmi <mghalmi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/07 14:50:27 by mghalmi           #+#    #+#              #
#    Updated: 2023/04/16 16:45:22 by mghalmi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

NAMEB = checker

SRC = Push_swap.c swaping.c pushing.c read_data.c rotate.c reverse_rotate.c sorting3AndLess.c \
		sorting5AndLess.c sorting100AndLess.c sorting500AndLess.c index.c justSort.c sorted.c

SRCB = swaping.c pushing.c read_data.c rotate.c reverse_rotate.c sorting3AndLess.c \
		sorting5AndLess.c index.c justSort.c chekerPushing.c  checker.c \
		get_next_line/get_next_line.c get_next_line/get_next_line_utils.c sorted.c

HEADER = push_swap.h

LIBFTDIR = libft/

PRINTFDIR = ft_printf/

OBJ = $(SRC:%.c=%.o)

OBJB = $(SRCB:%.c=%.o)

all : $(NAME)

bonus : $(NAMEB)

$(NAME) : $(OBJ) push_swap.h libft/libft.h ft_printf/ft_printf.h
	make -C $(LIBFTDIR)
	make bonus -C $(LIBFTDIR)
	make -C $(PRINTFDIR)
	cc -Wall -Wextra -Werror $(SRC) libft/libft.a ft_printf/libftprintf.a -o $(NAME)

$(NAMEB) : $(OBJB) push_swap.h get_next_line/get_next_line.h libft/libft.h ft_printf/ft_printf.h
	make -C $(LIBFTDIR)
	make bonus -C $(LIBFTDIR)
	make -C $(PRINTFDIR)
	cc -Wall -Wextra -Werror $(SRCB) libft/libft.a ft_printf/libftprintf.a -o $(NAMEB)

clean :
	make clean -C $(LIBFTDIR)
	make clean -C $(PRINTFDIR)
	rm -rf $(OBJ)
	rm -rf $(OBJB)
	rm -rf *.o

fclean : clean
	make fclean -C $(LIBFTDIR)
	make fclean -C $(PRINTFDIR)
	rm -rf $(NAME)
	rm -rf $(NAMEB)

re : fclean all