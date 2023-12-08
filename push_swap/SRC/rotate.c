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

void	rotate_b(t_stack **b)
{
    t_stack *temp;
    t_stack *temp2;

    if (*b && (*b)->next)
    {
        temp = *b;
        *b = (*b)->next;
        temp2 = *b;
        while (temp2->next)
            temp2 = temp2->next;
        temp2->next = temp;
        temp->next = NULL;
    }
    write(1, "rb\n", 3);
}

void rotate_ab(t_stack **a, t_stack **b)
{
    rotate_a(a);
    rotate_b(b);
    write(1, "rr\n", 3);
}