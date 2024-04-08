#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*char_dest;
	unsigned char	*char_src;

	i = 0;
	if (dest != src)
	{
		while (i < n)
		{
			char_dest = (unsigned char *)dest;
			char_src = (unsigned char *)src;
			char_dest[i] = char_src[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char A[] = "allo allo";
	char B[128] = "dghsgh";
	char C[] = "allo allo" ;
	char D[128] = "dghsgh";

	ft_memcpy(B, A, 5);
	memcpy(D, C, 5);
	printf("dyale dest %s\n", B);
	printf("dyalhoum dest %s\n", D);

}*/
