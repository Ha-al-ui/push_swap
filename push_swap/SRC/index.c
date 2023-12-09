/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <halaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 01:47:45 by halaoui           #+#    #+#             */
/*   Updated: 2023/12/09 01:47:45 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int index_size(t_stack *head)
{
    int size = 0;

    while (head != NULL)
    {
        size++;
        head = head->next;
    }

    return size;
}
void reset_index(t_stack **stack)
{
    t_stack *tmp;
    int i;

    i = -1;
    tmp = *stack;
    while(tmp)
    {
        tmp->index = i;
        tmp = tmp->next;
    }
    stack = &tmp;
}
void index_all(t_stack **stack)
{
    t_stack *tmp;
    int min;
    int size;
    int i;

    i = 0;
    reset_index(stack);
    min = find_min(*stack);
    size = stack_size(*stack);
    tmp = *stack;
    while(size)
    {
        while (tmp)
        {
            min = find_min(*stack);
            if(tmp->value == min)
            {
                tmp->index = i;
                i++;
            }
            tmp = tmp->next;
        }
        size--;
        tmp = *stack;
    }
    stack = &tmp;
}
