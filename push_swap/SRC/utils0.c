/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils0.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <halaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 01:49:18 by halaoui           #+#    #+#             */
/*   Updated: 2023/12/09 01:49:18 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_str(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (ft_isdigit(str[i]))
			return (1);
		i++;
	}
	return (0);
}

int	is_sign(char c)
{
	return (c == '+' || c == '-');
}

int find_min(t_stack *stack)
{
    int min;
    
    min = MAX_INT;
    while (stack)
    {
        if (stack->value < min && stack->index == -1)
            min = stack->value;
        stack = stack->next;
    }
    return min;
}

int find_max(t_stack *stack)
{
    int max;
    
    max = MIN_INT;
    while (stack)
    {
        if (stack->value > max && stack->index == -1)
            max = stack->value;
        stack = stack->next;
    }
    return max;
}

int last_value(t_stack *stack)
{
    t_stack *tmp;
    while(stack)
    {
        tmp = stack;
        stack = stack->next;
    }
    return tmp->value;
}
