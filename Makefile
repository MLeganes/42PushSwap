# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 11:24:29 by amorcill          #+#    #+#              #
#    Updated: 2021/11/29 21:04:27 by amorcill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
CC		= gcc
FLAGS	= -Wall -Wextra -Werror -g -fsanitize=address
OBJS	= $(patsubst %.c, %.o, $(SRCS))
SRCS	=	push_swap.c \
			push_swap_init.c \
			check_input.c \
			stack.c \
			error.c \

 
%.o: %.c
	$(CC) $(FLAGS) -Ilibft -c $< -o $@

all: $(NAME)

$(NAME): libft/libft.a $(OBJS)
	$(CC) $(FLAGS) -Llibft -lft -o $(NAME) $(OBJS)

clean:
	rm -f *.o
	rm -f *.out
	make -C libft clean

fclean: clean
	make -C libft fclean	
	rm -f $(NAME)

re: fclean $(NAME)
	
libft/libft.a:
	make -C libft all
