/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <halaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:39:30 by halaoui           #+#    #+#             */
/*   Updated: 2023/12/09 02:00:23 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void tst1(t_stack **a, t_stack **b, int prev_p, int prev_inst_n)
{
    if (prev_p <= stack_size(*b) / 2)
    {
        while (prev_inst_n--)
            rotate_b(b);
    }
    else
    {
        while (prev_inst_n--)
            reverse_rotate_b(b);
    }
    push_a(a, b);
}

void	tst(t_stack **b, int max_p, int max_inst_n)
{
	index_all(b);
	max_inst_n = calculate_instructions(*b,
			get_positon(*b, stack_size(*b) - 1));
	max_p = get_positon(*b, stack_size(*b) - 1);
	if (max_p <= stack_size(*b) / 2)
	{
		while (max_inst_n--)
			rotate_b(b);
	}
	else
	{
		while (max_inst_n--)
			reverse_rotate_b(b);
	}
}

void	tst2(t_stack **a, t_stack **b, int max_p, int max_inst_n)
{
	if (max_p <= stack_size(*b) / 2)
	{
		while (max_inst_n--)
			rotate_b(b);
	}
	else
	{
		while (max_inst_n--)
			reverse_rotate_b(b);
	}
	push_a(a, b);
}

void	sort_inf(t_stack **a, t_stack **b)
{
	int	max_p;
	int	prev_p;
	int	max_inst_n;
	int	prev_inst_n;

	while (*b)
	{
		max_p = get_positon(*b, stack_size(*b) - 1);
		prev_p = get_positon(*b, stack_size(*b) - 2);
		max_inst_n = calculate_instructions(*b, max_p);
		prev_inst_n = calculate_instructions(*b, prev_p);
		if (max_inst_n > prev_inst_n)
		{
            tst1(a, b, prev_p, prev_inst_n);
			tst(b, max_p, max_inst_n);
			push_a(a, b);
			swap_a(a);
		}
		else
			tst2(a, b, max_p, max_inst_n);
	}
}

void	sort_2(t_stack **a, t_stack **b)
{
	int	p;
	int	i;
	int	j;
	int	p_size;

	p_size = change_psize(a);
	p = stack_size(*a) / p_size;
	i = p;
	j = 0;
	while (*a)
	{
		if ((*a)->index < i)
		{
			push_b(a, b);
			j++;
			if ((*b)->index > i - (p / 2))
				rotate_b(b);
			if (i == j)
				i += p;
		}
		else
			rotate_a(a);
	}
	sort_inf(a, b);
}
