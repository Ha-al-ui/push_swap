# ifndef  PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_stack
{
    int value;
    int             content;
    struct s_stack	*next;
}				t_stack;

int     ft_atoi(const char *str);
void	ft_putstr(char *s);
void    ft_putchar(char c);
void    ft_error(char *str);
int     ft_isdigit(int c);
int     parsing_args(char **argv, t_stack **a);
void    ft_free_stack(t_stack *stack);
t_stack *ft_lstnew(int content);
void    ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack *ft_lstlast(t_stack *lst);
void ft_print_stack(t_stack *stack);
t_stack *ft_create_stack(int argc, char **argv);

#endif