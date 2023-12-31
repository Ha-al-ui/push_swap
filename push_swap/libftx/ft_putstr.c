/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <halaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 01:23:23 by halaoui           #+#    #+#             */
/*   Updated: 2023/11/28 01:23:28 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../SRC/push_swap.h"

void	ft_putstr(char *s)
{
	int	i;

	if (s)
	{
		i = 0;
		while (s[i] != '\0')
		{
			write(1, &s[i], 1);
			i++;
		}
	}
	return ;
}
