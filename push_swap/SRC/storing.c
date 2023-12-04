#include "push_swap.h"

t_stack *storing_a(char **s)
{
    t_stack *a = NULL;
    int i = 0;
    while (s[i])
    {
        t_stack *tmp = ft_lstnew(atoi(s[i]));
        ft_lstadd_back(&a, tmp);
        i++;
    }
    return a;
}