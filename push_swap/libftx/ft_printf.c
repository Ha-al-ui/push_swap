/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <halaoui@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 02:44:27 by halaoui           #+#    #+#             */
/*   Updated: 2023/11/28 02:53:30 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../SRC/push_swap.h"

void	ft_putstrcount(char *s, int *count)
{
	int	i;

	i = 0;
	if (!s)
	s = "(null)";
	while (s[i])
	{
		ft_putcharcount(s[i++], count);
	}
}

void	ft_putnbrcount(int n, int *count)
{
	int	d;
	int	m;

	if (n == -2147483648)
	{
		ft_putstrcount("-2147483648", count);
		return ;
	}
	else if (n < 0)
	{
		ft_putcharcount('-', count);
		n *= (-1);
		ft_putnbrcount(n, count);
	}
	else if (n >= 10)
	{
		m = n % 10;
		d = n / 10;
		n = d;
		ft_putnbrcount(n, count);
		ft_putcharcount(m + '0', count);
	}
	else
		ft_putcharcount(n + '0', count);
}

void	ft_putunsigned(int n, int *count)
{
	int	d;
	int	m;

	if (n >= 10)
	{
		m = n % 10;
		d = n / 10;
		n = d;
		ft_putunsigned(n, count);
		ft_putcharcount(m + '0', count);
	}
	else if (n >= 0 && n < 10)
		ft_putcharcount(n + '0', count);
}

void	detect_flag(va_list argprt, char flag, int *count)
{
	if (flag == 'c')
		ft_putcharcount(va_arg(argprt, int), count);
	if (flag == 's')
		ft_putstrcount(va_arg(argprt, char *), count);
	if (flag == 'd' || flag == 'i')
		ft_putnbrcount(va_arg(argprt, int), count);
	if (flag == 'u')
		ft_putunsigned(va_arg(argprt, unsigned int), count);
	if (flag == 'x')
		ft_hexa(va_arg(argprt, unsigned int), count);
	if (flag == 'X')
		ft_hexax(va_arg(argprt, unsigned int), count);
	if (flag == 'p')
	{
		ft_putstrcount("0x", count);
		ft_hexa(va_arg(argprt, unsigned long long), count);
	}
	if (flag == '%')
		ft_putcharcount('%', count);
}

int	ft_printf(const char *set_arg, ...)
{
	va_list	argprt;
	int		i;
	int		size;

	va_start(argprt, set_arg);
	i = 0;
	size = 0;
	while (set_arg[i])
	{
		if (set_arg[i] == '%')
		{
			i++;
			detect_flag(argprt, set_arg[i], &size);
		}
		else
			ft_putcharcount(set_arg[i], &size);
		i++;
	}
	return (size);
}
