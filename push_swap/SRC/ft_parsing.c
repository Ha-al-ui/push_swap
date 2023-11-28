/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <halaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 01:18:43 by halaoui           #+#    #+#             */
/*   Updated: 2023/11/28 01:18:58 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int parsing_args(char **argv, t_stack **a)
{
    int i;
    int j;
    int num;
    int sign;

    i = 1;
    while (argv[i])
    {
        j = 0;
        sign = 1;
        if (argv[i][j] == '-')
        {
            sign = -1;
            j++;
        }
        while (argv[i][j])
        {
            if (!ft_isdigit(argv[i][j]))
                ft_error("Error\nOnly numbers\n");
            j++;
        }
        num = ft_atoi(argv[i]) * sign;
        ft_lstadd_back(a, ft_lstnew(num));
        i++;
    }
    return (0);
}
