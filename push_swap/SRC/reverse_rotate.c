#include "push_swap.h"

void reverse_rotate_a(t_stack **a)
{
    t_stack *temp;
    t_stack *temp2;

    if (*a && (*a)->next)
    {
        temp = *a;
        temp2 = *a;
        while (temp2->next->next)
            temp2 = temp2->next;
        *a = temp2->next;
        (*a)->next = temp;
        temp2->next = NULL;
    }
    write(1, "rra\n", 4);
}