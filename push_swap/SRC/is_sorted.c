#include "push_swap.h"

int is_sorted(t_stack *stack, int size)
{
    
    if (size == 1)
        return (1);
    while (size > 1 && stack->next )
    {
        if (stack->value > stack->next->value)
            return (0);
        stack = stack->next;
    }
    return (1);
}