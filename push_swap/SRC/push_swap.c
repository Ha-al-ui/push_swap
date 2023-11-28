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

int main(int argc, char **argv)
{
    t_stack *a;

    if (argc > 1)
    {
        parsing_args(argv, &a);
        ft_print_stack(a);
        ft_free_stack(a);
    }
    else
        ft_error("Error\nWrong number of arguments\n");
    
}
