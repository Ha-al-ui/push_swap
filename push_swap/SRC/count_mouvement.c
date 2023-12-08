#include "push_swap.h"

int count_ra_moves(t_stack *a)
{
    t_stack *tmp;
    int count;
    int size;

    size = stack_size(a) / 2;
    tmp = a;
    count = 0;
    while (size)
    {
        if (tmp->index == -1)
            break;
        count++;
        tmp = tmp->next;
        size--;
    }
    return (count);
}

int count_rra_moves(t_stack *a)
{
    t_stack *tmp;
    int size;
    int count;

    size = stack_size(a) / 2;
    count = 1;
    
    while (size)
    {
        
    }
}