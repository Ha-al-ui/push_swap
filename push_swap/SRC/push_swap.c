/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <halaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 22:21:54 by halaoui           #+#    #+#             */
/*   Updated: 2023/12/09 02:25:44 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	storing_a(char **s, t_stack **a)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	while (s[i])
	{
		tmp = ft_lstnew(atoi(s[i]));
		ft_lstadd_back(a, tmp);
		i++;
	}
}

void	ft_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

int	main(int argc, char **argv)
{
	t_stack	*a ;
	t_stack	*b;
	char	**s;
	int		size_a;

	a = NULL;
	b = NULL;
	if (argc > 1)
	{
		s = parsing_args(argv);
		storing_a(s, &a);
		ft_free(s);
		size_a = stack_size(a);
		if (!is_sorted(a, size_a))
		{
			if (size_a <= 5)
				sort_1(&a, &b, size_a);
			if (size_a > 5)
			{
				index_all(&a);
				sort_2(&a, &b);
			}
			ft_free_stack(b);
		}
		ft_free_stack(a);
	}
}
