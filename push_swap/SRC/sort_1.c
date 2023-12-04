#include "push_swap.h"

void	sort2_3(t_stack **a, int size)
{
    if (size == 2 && !is_sorted(*a, size))
        swap_a(a);
    else if (size == 3 && !is_sorted(*a, size))
    {
        if ((*a)->value > (*a)->next->value && (*a)->value < (*a)->next->next->value)
            swap_a(a);
        else if ((*a)->value > (*a)->next->value && (*a)->value > (*a)->next->next->value)
            if ((*a)->next->value > (*a)->next->next->value)
            {
                swap_a(a);
                reverse_rotate_a(a);
            }
            else
                rotate_a(a);
        else if ((*a)->value < (*a)->next->value && (*a)->value > (*a)->next->next->value)
            reverse_rotate_a(a);
        else if ((*a)->value < (*a)->next->value && (*a)->value < (*a)->next->next->value)
        {
            swap_a(a);
            rotate_a(a);
        }
    }
}

void sort4_5(t_stack **a, t_stack **b)
{
    int min;
    int size;

    size = stack_size(*a);
    while (size > 3)
    {
        min = find_min(*a);
        if ((*a)->value == min)
            push_b(a, b);
        else if(last_value(*a) == min)
        {
            reverse_rotate_a(a);
            push_b(a, b);
        }
        else if ((*a)->next->value == min)
        {
            swap_a(a);
            push_b(a, b);
        }
        else
            rotate_a(a);
        size = stack_size(*a);
    }
    sort2_3(a, size);
    push_a(a, b);
}

void sort5(t_stack **a, t_stack **b)
{
    int min;
    int size;

    size = stack_size(*a);
    while (size > 4)
    {
        min = find_min(*a);
        if ((*a)->value == min)
            push_b(a, b);
        else if(last_value(*a) == min)
        {
            reverse_rotate_a(a);
            push_b(a, b);
        }
        else
            rotate_a(a);
        size = stack_size(*a);
    }
    sort4_5(a, b);
    push_a(a, b);
}

void	sort_1(t_stack **a, t_stack **b, int size)
{
    if (size == 4)
        sort4_5(a, b);
    else if (size == 5)
        sort5(a, b);
    else
        sort2_3(a, size);
}
