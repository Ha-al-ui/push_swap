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
