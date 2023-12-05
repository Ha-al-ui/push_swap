#include "push_swap.h"

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
