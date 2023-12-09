/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <halaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 01:49:15 by halaoui           #+#    #+#             */
/*   Updated: 2023/12/09 01:49:15 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void swap_a(t_stack **a)
{
    int temp;

    if (*a && (*a)->next)
    {
        temp = (*a)->value;
        (*a)->value = (*a)->next->value;
        (*a)->next->value = temp;
    }
    write(1, "sa\n", 3);
}
void swap_b(t_stack **b)
{
    int temp;

    if (*b && (*b)->next)
    {
        temp = (*b)->value;
        (*b)->value = (*b)->next->value;
        (*b)->next->value = temp;
    }
    write(1, "sb\n", 3);
}

void swap_ab(t_stack **a, t_stack **b)
{
    swap_a(a);
    swap_b(b);
    write(1, "ss\n", 3);
}
