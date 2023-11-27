#include "../SRC/push_swap.h"

t_stack *ft_lstnew(int content)
{
    t_stack *new;

    new = malloc(sizeof(t_stack));
    if (!new)
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}
