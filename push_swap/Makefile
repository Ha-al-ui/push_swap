NAME		=	push_swap

CC 			=	cc

CFLAGS		=	-Wall -Werror -Wextra

SRC_M		=	SRC/push_swap.c\
				SRC/ft_parsing.c\
				SRC/ft_free_stack.c\
				SRC/print_stack.c\
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