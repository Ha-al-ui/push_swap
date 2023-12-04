#include "push_swap.h"

void swap_a(t_stack **a)
{
    int temp;

    if (*a && (*a)->next)
    {
        temp = (*a)->value;
        (*a)->value = (*a)->next->value;
        (*a)->next->value = temp;
    }
    write(1, "sa\n", 3);
}
void swap_b(t_stack **b)
{
    int temp;

    if (*b && (*b)->next)
    {
        temp = (*b)->value;
        (*b)->value = (*b)->next->value;
        (*b)->next->value = temp;
    }
    write(1, "sb\n", 3);
}
