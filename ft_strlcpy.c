#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (src[count])
		count++;
	if (size < 1)
		return (count);
	while (src[i] && (i < size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (count);
}

/*
#include <stdio.h>

int	main(void)
{
	char	a[] = "hello";
	char	b[] = "";

	printf("%ld\n", ft_strlcpy(a, b, -10));
	printf("%s", a);
}*/
