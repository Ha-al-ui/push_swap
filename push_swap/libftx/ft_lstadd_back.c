/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <halaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 08:04:49 by halaoui           #+#    #+#             */
/*   Updated: 2023/11/28 01:25:32 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../SRC/push_swap.h"

void ft_lstadd_back(t_stack **stack, t_stack *new)
{
    t_stack *last;

    if (!stack)
        return ;
    if (!*stack)
    {
        *stack = new;
        return ;
    }
    last = ft_lstlast(*stack);
    last->next = new;
}

