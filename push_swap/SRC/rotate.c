#include "push_swap.h"

void	rotate_a(t_stack **a)
{
    t_stack *temp;
    t_stack *temp2;

    if (*a && (*a)->next)
    {
        temp = *a;
        *a = (*a)->next;
        temp2 = *a;
        while (temp2->next)
            temp2 = temp2->next;
        temp2->next = temp;
        temp->next = NULL;
    }
    write(1, "ra\n", 3);
}