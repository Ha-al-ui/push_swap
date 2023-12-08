/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <halaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 22:21:58 by halaoui           #+#    #+#             */
/*   Updated: 2023/11/28 02:52:34 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef  PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <ctype.h>

# define MAX_INT	2147483647
# define MIN_INT	-2147483648

typedef struct s_stack
{
    int value;
    int index;
    struct s_stack	*next;
}				t_stack;

int	    ft_printf(const char *set_arg, ...);
int     ft_atoi(const char *str);
void	ft_putstr(char *s);
void    ft_putchar(char c);
void    sort_3numbers(t_stack **a);
void    ft_error(char *str);
int     ft_isdigit(int c);
char    **parsing_args(char **argv);
void    ft_free_stack(t_stack *stack);
t_stack *ft_lstnew(int content);
void    ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack *ft_lstlast(t_stack *lst);
void    ft_print_stack(t_stack *stack);
t_stack *ft_create_stack(int argc, char **argv);
void	ft_putcharcount(char c, int *counter);
void	ft_hexax(unsigned long n, int *count);
void	ft_hexa(unsigned long n, int *count);
char    **ft_split(char const *s, char c);
char	*ft_substr( char *s, unsigned int start, int len);
char	*ft_strdup(char *s1);
char    *ft_strjoin(char *s1, char *s2);
int     ft_strlen(char *str);
int     have_duplicates(char **av);
int		ft_strcmp(char *s1, char *s2);
int     is_sorted(t_stack *stack, int size);
int     stack_size(t_stack *stack);
void    sort2_3(t_stack **a, int size);
void    swap_a(t_stack **a);
void    rotate_a(t_stack **a);
void    reverse_rotate_a(t_stack **a);
void	push_a(t_stack **a, t_stack **b);
void    sort_1(t_stack **a, t_stack **b, int size);
void    swap_b(t_stack **b);
void	push_b(t_stack **a, t_stack **b);
int     find_min(t_stack *stack);
int     last_value(t_stack *stack);
void    sorting4(t_stack **a, t_stack **b, int size, int min);
int	    is_sign(char c);
void    index_all(t_stack **stack);
int     find_max(t_stack *stack);


#endif