# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 11:24:29 by amorcill          #+#    #+#              #
#    Updated: 2021/12/02 16:56:00 by amorcill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
CC		= clang
FLAGS	= -Wall -Wextra -Werror -g -fsanitize=address 
OBJS	= $(patsubst %.c, %.o, $(SRCS))
SRCS	=	error.c \
			operation_push.c \
			operation_rev_rotate.c \
			operation_rotate.c \
			operation_swap.c \
			push_swap.c \
			push_swap_init.c \
			stack_a_add_last.c \
			stack_a_check_duplication.c \
			stack_a_create.c \
			stack_add_first.c \
			stack_new.c \
			stack_remove_first.c \
			print_operation.c \
 
%.o: %.c
	$(CC) $(FLAGS) -Ilibft -c $< -o $@

all: $(NAME)

$(NAME): libft/libft.a $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -Llibft -lft -o $(NAME) 

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
