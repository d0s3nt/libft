#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;

	if (dest == src)
		return (dest);
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n > 0)
		{
			((char *)dest)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
int	main(void)
{
	char *p;
	char *y;
	char A[100] = {'0', 'f', 'a', 'f', 'b', 'q', 'm', 'a'};
	p = (char *)ft_memmove(A , A, 7);
	y = (char *)memmove(A , A, 7);
	printf("dyale ::%s, B = %s\n", p , A);
	printf("dyalhoum :: %s, B = %s\n", y, A);

}*/
