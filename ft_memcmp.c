#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((const unsigned char *)s1)[i] != ((const unsigned char *)s2)[i])
			return ((((const unsigned char *)s1)[i])
				- ((const unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	char	A[] = "w";
	char	B[] = "w";

	printf("%d\n", ft_memcmp(A, B, 10));
	printf("%d\n", memcmp(A, B, 10));
	printf("%d\n", test(A, B, 10));
}
*/
