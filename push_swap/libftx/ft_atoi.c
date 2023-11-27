#include "../SRC/push_swap.h"

static int	white_spaces(const char *s, size_t i)
{
	return (s[i] != '\0' && (s[i] == 32 || s[i] == '\t' || s[i] == '\n'
			|| s[i] == '\r' || s[i] == '\v' || s[i] == '\f'));
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
	}
	return (res * s);
}
