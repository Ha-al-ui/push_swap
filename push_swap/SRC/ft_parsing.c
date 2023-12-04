/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <halaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 01:18:43 by halaoui           #+#    #+#             */
/*   Updated: 2023/11/28 01:18:58 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sign(char c)
{
	return (c == '+' || c == '-');
}

static int	arg_is_number(char **av)
{
	int	i;
    int j;

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

int ft_sign(char **tab)
{
    int i;
    int j;

    i = 0;
    while (tab[i])
    {
        j = 0;
        while (ft_isdigit(tab[i][j]))
        {
            if (tab[i][j + 1] == '-' || tab[i][j + 1] == '+')
                return (0);
            j++;
        }
        j = 0;
        while (tab[i][j] == '-' || tab[i][j] == '+')
        {
            if (!ft_isdigit(tab[i][j + 1]))
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}

int have_duplicates(char **av)
{
    int i;
    int j;

    i = 0;
    while (av[i])
    {
        j = i + 1;  
        while (av[j])
        {
            if(ft_atoi(av[i]) == ft_atoi(av[j]))
                return(0);
            j++;
        }
        i++;
    }
    return 1;
}

char ** parsing_args(char **argv)
{
    int i;
    char *str;
    char **tab;

    str = ft_strdup("");
    i = 1;
    while (argv[i])
    {
        str = ft_strjoin(str, argv[i]);
        str = ft_strjoin(str, " ");
        i++;
    }
    tab = ft_split(str, ' ');
    if (!arg_is_number(tab))
        ft_error("Error\nOnly numbers are allowed\n");
    else if (!ft_sign(tab))
        ft_error("Error\nProblem in signs\n");
    else if (!have_duplicates(tab))
        ft_error("Error\nTheir is numbers duplicates\n");
    return (tab);
}
