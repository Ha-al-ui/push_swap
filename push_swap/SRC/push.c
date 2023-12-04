#include "push_swap.h"

void	push_a(t_stack **a, t_stack **b)
{
    t_stack	*temp;

    if (*b)
    {
        temp = *b;
        *b = (*b)->next;
        temp->next = *a;
        *a = temp;
    }
    write(1, "pa\n", 3);
}

void	push_b(t_stack **a, t_stack **b)
{
    t_stack	*temp;

    if (*a)
    {
        temp = *a;
        *a = (*a)->next;
        temp->next = *b;
        *b = temp;
    }
    write(1, "pb\n", 3);
}