/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <halaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 01:20:13 by halaoui           #+#    #+#             */
/*   Updated: 2023/11/28 01:20:25 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../SRC/push_swap.h"

static int	white_spaces(const char *s, size_t i)
{
	return (s[i] != '\0' && (s[i] == 32 || s[i] == '\t' || s[i] == '\n'
			|| s[i] == '\r' || s[i] == '\v' || s[i] == '\f'));
}

static int result(const char *str, int i, int s, unsigned long res)
{
	if(!str)
		ft_error("Error\n");
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
		if (res > 9223372036854775807ull && s == 1)
			return (-1);
		if (res > 9223372036854775807ull)
			return (0);
		if ((long)res > MAX_INT || (long)res < MIN_INT)
			ft_error("Error\n");
	}
	return (res * s);
}

int	ft_atoi(const char *str)
{
	int				i;
	int				s;
	unsigned long	res;

	i = 0;
	s = 1;
	res = 0;
	while (white_spaces(str, i))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
		if (res > 9223372036854775807ull && s == 1)
			return (-1);
		if (res > 9223372036854775807ull)
			return (0);
		if ((long)res > MAX_INT || (long)res < MIN_INT)
			ft_error("Error\n");
	}
	res = result(str, i, s, res);
	return (res);
}
