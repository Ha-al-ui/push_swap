/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calculation.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <halaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:39:33 by halaoui           #+#    #+#             */
/*   Updated: 2023/12/08 22:39:34 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	change_psize(t_stack **a)
{
	if (stack_size(*a) <= 100)
		return (5);
	else
		return (9);
}

int	calculate_instructions(t_stack *stack, int index)
{
	int	median;
	int	i;

	i = 0;
	median = stack_size(stack) / 2;
	if (index <= median)
		return (index);
	else
		return (stack_size(stack) - index);
	return (0);
}

int	get_positon(t_stack *stack, int index)
{
	int	position;
	int	i;

	position = 0;
	if (!stack)
		return (0);
	while (stack)
	{
		i = stack->index;
		if (i != index)
			position++;
		else
			break ;
		stack = stack->next;
	}
	return (position);
}
