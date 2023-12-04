/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <halaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 22:21:54 by halaoui           #+#    #+#             */
/*   Updated: 2023/11/28 01:29:50 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void storing_a(char **s, t_stack **a)
{
    int i;

    i = 0;
    while (s[i])
    {
        t_stack *tmp = ft_lstnew(atoi(s[i]));
        ft_lstadd_back(a, tmp);
        i++;
    }
}

void ff(void)
{
    system("leaks push_swap");
}
int main(int argc, char **argv)
{
    // atexit(ff);
    t_stack *a ;
    t_stack *b;
    char **s;
    int size_a;
    
    a = NULL;
    b = NULL;
    if (argc > 1)
    {
        s = parsing_args(argv);
        storing_a(s, &a);
        size_a = stack_size(a);
        if (!is_sorted(a, size_a))
        {
            if (size_a <= 5)
                sort_1(&a, &b, size_a);
            // ft_print_stack(a);
            ft_free_stack(b);
        }
        else
            ft_putstr("Already sorted\n");
        ft_free_stack(a);
    }
    else
        ft_error("Error\nWrong number of arguments\n");
    
}

