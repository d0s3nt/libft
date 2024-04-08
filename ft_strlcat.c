#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	n;
	unsigned int	a;
	unsigned int	j;

	i = 0;
	n = 0;
	a = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[j])
		j++;
	if (size == 0 || size <= i)
		return (j + size);
	a = i;
	while (src[n] && n < size - a - 1)
	{
		dst[i] = src[n];
		n++;
		i++;
	}
	dst[i] = '\0';
	return (a + j);
}
/*
#include <stdio.h>

int	main(void)
{
	char a[] = "hello";
	char b[] = "wesh a bro";
	printf("%ld\n", ft_strlcat(a, b, 145));
	printf("%s", a);
}*/
