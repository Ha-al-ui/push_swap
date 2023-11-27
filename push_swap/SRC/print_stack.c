#include "../SRC/push_swap.h"

void ft_print_stack(t_stack *stack)
{
    while (stack)
    {
        printf("%d ", stack->content);
        stack = stack->next;
    }
    printf("\n");
}