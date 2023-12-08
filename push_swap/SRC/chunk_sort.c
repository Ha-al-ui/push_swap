#include "push_swap.h"

int count_chunk(t_stack **a, int limit)
{
    t_stack *tmp;
    int size;
    int count;

    size = stack_size(*a);
    temp = *a;
    count = 0;
    while(size)
    {
        if (tmp->value <= limit)
        {
            tmp->index = 1;
            count++;
        }
        tmp = tmp->next;
        size--;
    }
    return (count);
}

void move_clo_to_top(t_stack **a)
{
    int count_top;
    int count_bottom;

    count_top = count_ra_moves(*a);
    count_bottom = count_rra_moves(*a);
    if (count_top > count_bottom)
    {
        while (count_bottom)
        {
            rra(a);
            count_bottom--;
        }
    }
    else
    {
        while (count_top)
        {
            ra(a);
            count_top--;
        }
    }
}

int move_to_b(t_stack **a, t_stack **b, int limit)
{
    int i;

    i = count_chunk(*a, limit);
    while (i)
    {
        move_clo_to_top(*a);
        push_b(a,b);
        i--;
    }
    return (1);  
}