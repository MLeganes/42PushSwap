# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amorcill <amorcill@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/27 11:24:29 by amorcill          #+#    #+#              #
#    Updated: 2021/12/17 19:56:35 by amorcill         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
CC		= clang
FLAGS	= -Wall -Wextra -Werror -g -fsanitize=address 
OBJS	= $(patsubst %.c, %.o, $(SRCS))
SRCS	=	algorithm_small.c \
			algorithm_large.c \
			operation_push.c \
			operation_rev_rotate.c \
			operation_rotate.c \
			operation_swap.c \
			push_swap.c \
			push_swap_error.c \
			push_swap_free.c \
			push_swap_init.c \
			stack_add_first.c \
			stack_add_last.c \
			stack_check_duplication.c \
			stack_create.c \
			stack_new.c \
			stack_remove_first.c \
			print_operation.c \
			stack_print.c \
			stack_issorted.c \
			
 
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
