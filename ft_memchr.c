#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
int	main(int argc , char *argv)
{
	char arr[] = "hello this is a test";
	char *ptr = ft_memchr(arr, '0', ft_strlen(arr));
	char *chil3ba = memchr(arr, '0', ft_strlen(arr));

	printf("String: %s\n", ptr);
	printf("dyalhoum : %s", chil3ba);
}*/
