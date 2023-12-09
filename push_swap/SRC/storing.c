/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   storing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <halaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 01:49:11 by halaoui           #+#    #+#             */
/*   Updated: 2023/12/09 01:49:11 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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