# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: halaoui <halaoui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/24 22:22:02 by halaoui           #+#    #+#              #
#    Updated: 2023/11/28 02:50:37 by halaoui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	push_swap

CC 			=	cc

CFLAGS		=	-Wall -Werror -Wextra 

SRC_M		=	SRC/push_swap.c\
				SRC/ft_parsing.c\
				SRC/ft_free_stack.c\
				SRC/print_stack.c\
				SRC/is_sorted.c\
				SRC/sort_1.c\
				SRC/stack_size.c\
				SRC/swap.c\
				SRC/rotate.c\
				SRC/reverse_rotate.c\
				SRC/push.c\
				SRC/utils0.c\
				SRC/index.c\
				SRC/sort_2.c\
				SRC/chunk_sort.c\
				libftx/ft_putnbr.c\
				libftx/ft_atoi.c\
				libftx/ft_putstr.c\
				libftx/ft_error.c\
				libftx/ft_putchar.c\
				libftx/ft_isdigit.c\
				libftx/ft_strlen.c\
				libftx/ft_lstnew.c\
				libftx/ft_lstlast.c\
				libftx/ft_lstadd_back.c\
				libftx/ft_printf.c\
				libftx/ft_hexa.c\
				libftx/ft_split.c\
				libftx/ft_strdup.c\
				libftx/ft_strjoin.c\
				libftx/ft_substr.c\
				libftx/ft_strcmp.c\

OBJS		=	$(SRC_M:.c=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)
				$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

%o: %c push_swap.h
	$(CC) $(CFLAGS) -c $<

clean		:
				@rm -f $(OBJS)

fclean		:	clean
				@rm -f $(NAME)

re			:	fclean all

.PHONY		:	all clean fclean re bonus