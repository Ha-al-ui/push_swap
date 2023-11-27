#include "../SRC/push_swap.h"

t_stack *ft_lstlast(t_stack *stack)
{
    if (!stack)
        return (NULL);
    while (stack->next)
        stack = stack->next;
    return (stack);
}
