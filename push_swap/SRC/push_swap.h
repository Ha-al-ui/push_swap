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

typedef struct s_stack
{
    int value;
    int             content;
    struct s_stack	*next;
}				t_stack;

int	    ft_printf(const char *set_arg, ...);
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
void	ft_putcharcount(char c, int *counter);
void	ft_hexax(unsigned long n, int *count);
void	ft_hexa(unsigned long n, int *count);

#endif