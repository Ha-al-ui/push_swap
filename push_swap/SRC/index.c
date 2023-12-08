#include "push_swap.h"

int index_size(t_stack *head)
{
    int size = 0;

    while (head != NULL)
    {
        size++;
        head = head->next;
    }

    return size;
}

void index_all(t_stack **stack)
{
    t_stack *tmp;
    int min;
    int size;
    int i;

    i = 0;
    min = find_min(*stack);
    size = stack_size(*stack);
    tmp = *stack;
    while(size)
    {
        while (tmp)
        {
            min = find_min(*stack);
            if(tmp->value == min)
            {
                tmp->index = i;
                i++;
            }
            tmp = tmp->next;
        }
        size--;
        tmp = *stack;
    }
    stack = &tmp;
}
