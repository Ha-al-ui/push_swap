/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <halaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 01:48:57 by halaoui           #+#    #+#             */
/*   Updated: 2023/12/09 01:48:57 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void reverse_rotate_a(t_stack **a)
{
    t_stack *temp;
    t_stack *temp2;

    if (*a && (*a)->next)
    {
        temp = *a;
        temp2 = *a;
        while (temp2->next->next)
            temp2 = temp2->next;
        *a = temp2->next;
        (*a)->next = temp;
        temp2->next = NULL;
    }
    write(1, "rra\n", 4);
}

void reverse_rotate_b(t_stack **b)
{
    t_stack *temp;
    t_stack *temp2;

    if (*b && (*b)->next)
    {
        temp = *b;
        temp2 = *b;
        while (temp2->next->next)
            temp2 = temp2->next;
        *b = temp2->next;
        (*b)->next = temp;
        temp2->next = NULL;
    }
    write(1, "rrb\n", 4);
}

void reverse_rotate_ab(t_stack **a, t_stack **b)
{
    reverse_rotate_a(a);
    reverse_rotate_b(b);
    write(1, "rrr\n", 4);
}