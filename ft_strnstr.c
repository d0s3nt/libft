#include "libft.h"
//#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] != '\0')
	{
		j = 0;
		while (big[i + j] != '\0' && big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char a[] = "787";
	char b[] = "what the hell waaa wj 787:::787lllea_";
	printf("dyale : %s\n", ft_strnstr(b, a, 30));
	printf("originale : %s\n",  strnstr(b, a, 30));
}*/
