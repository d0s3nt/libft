#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = c;
		i++;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	int x = 'C';
	char	p[10];
	char *dyale;
	char *dyaloum;

	dyale = (char *)(ft_memset(p, x, 18));
	dyaloum = (char *)(memset(p, x, 18));
	printf("dyale %s\n", dyale);
	printf("dyaloum %s\n", dyaloum);
}*/
