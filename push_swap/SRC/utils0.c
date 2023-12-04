#include "push_swap.h"

int find_min(t_stack *stack)
{
    int min;
    
    min = MAX_INT;  // Assume all values are greater than INT_MAX initially
    while (stack)
    {
        if (stack->value < min)
            min = stack->value;
        stack = stack->next;
    }
    return min;
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
