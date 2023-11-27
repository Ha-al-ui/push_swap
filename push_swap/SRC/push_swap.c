#include "push_swap.h"

int main(int argc, char **argv)
{
    t_stack *a;

    if (argc > 1)
    {
        parsing_args(argv, &a);
        ft_print_stack(a);
        ft_free_stack(a);
    }
    else
        ft_error("Error\nWrong number of arguments\n");
    
}