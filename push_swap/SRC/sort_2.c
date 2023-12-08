#include "push_swap.h"

int	get_chunk_number(t_stack *stack_a, int size)
{
	int	chunk_step;
	int	max;
	int	min;

	max = find_max(stack_a);
	min = find_min(stack_a);
	if (size <= 100)
		chunk_step = ((max - min) / 5) + 1;
	if (size > 100)
		chunk_step = ((max - min) / 12) + 1;
        // printf("chunk_step = %d\n", chunk_step);
	return (chunk_step);
}

void sort_2_100(t_stack **a, t_stack **b)
{
    int step;
    int size;
    int limit;

    step = get_chunk_number(*a, stack_size(*a));
    limit = find_min(*a) + step;
    size = stack_size(*a);
    while (size)
    {
        if (move_to_b(a, b, limit))
            limit += step;
        size--;
    }
}
void sort_2(t_stack **a, t_stack **b, int size)
{
    if (size <= 100)
        sort_2_100(a, b);
    // else
    //     sort_2_500(a, b, size);
}