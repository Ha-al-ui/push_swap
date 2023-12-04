#include "../SRC/push_swap.h"

static int	car_coun(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static void	ft_free(char **p)
{
	int	i;

	i = 0;
	while (p[i])
		free(p[i++]);
	free(p);
}

static char	**split_m(const char *s, char c)
{
	char	**p;
	size_t	i;
	size_t	len;

	i = 0;
	p = malloc(sizeof(char *) * (car_coun(s, c) + 1));
	if (!p)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				s++;
			p[i++] = ft_substr((char*)s - len, 0, len);
			if (!p)
				ft_free(p);
		}
		else
			s++;
	}
	p[i] = NULL;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char		**p;

	if (!s)
		return (0);
	p = split_m(s, c);
	if (!p)
		return (NULL);
	return (p);
}