/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <halaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 02:47:06 by halaoui           #+#    #+#             */
/*   Updated: 2023/11/28 02:47:45 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../SRC/push_swap.h"

void	ft_putcharcount(char c, int *counter)
{
	write (1, &c, 1);
	*counter += 1;
}

void	ft_hexa(unsigned long n, int *count)
{
	char	*base ;

	base = "0123456789abcdef";
	if (n >= 16)
	{
		ft_hexa(n / 16, count);
		ft_hexa(n % 16, count);
	}
	else
		ft_putcharcount(base[n], count);
}

void	ft_hexax(unsigned long n, int *count)
{
	char	*base ;

	base = "0123456789ABCDEF";
	if (n >= 16)
	{
		ft_hexax(n / 16, count);
		ft_hexax(n % 16, count);
	}
	else
		ft_putcharcount(base[n], count);
}
