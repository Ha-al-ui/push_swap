/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <halaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 01:18:43 by halaoui           #+#    #+#             */
/*   Updated: 2023/12/09 02:13:33 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_argv_null(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		if (argv[i][0] == '\0')
			ft_error("Error\n");
		ft_atoi(argv[i]);
		j = 0;
		while (argv[i][j])
		{
			if (check_str(argv[i]) == 0)
				ft_error("Error\n");
			j++;
		}
		i++;
	}
}

static int	arg_is_number(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (!ft_isdigit(av[i][j]) && !is_sign(av[i][j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_sign(char **tab)
{
	int	i;
	int	j;

	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j] == '-' || tab[i][j] == '+')
		{
			if (!ft_isdigit(tab[i][j + 1]))
				return (0);
			j++;
		}
		while (ft_isdigit(tab[i][j]))
		{
			if (tab[i][j + 1] == '-' || tab[i][j + 1] == '+')
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}

int	have_duplicates(char **av)
{
	int	i;
	int	j;

	i = 0;
	while (av[i])
	{
		j = i + 1;
		while (av[j])
		{
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	**parsing_args(char **argv)
{
	int		i;
	char	*str;
	char	**tab;

	check_argv_null(argv);
	str = ft_strdup("");
	i = 1;
	while (argv[i])
	{
		str = ft_strjoin(str, argv[i]);
		str = ft_strjoin(str, " ");
		i++;
	}
	tab = ft_split(str, ' ');
	free(str);
	if (!arg_is_number(tab))
		ft_error("Error\n");
	else if (!ft_sign(tab))
		ft_error("Error\n");
	else if (!have_duplicates(tab))
		ft_error("Error\n");
	return (tab);
}
