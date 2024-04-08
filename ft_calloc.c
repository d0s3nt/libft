#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	p = malloc(nmemb * size);
	if (!p)
		return (NULL);
	ft_memset(p, 0, size * nmemb);
	return (p);
}
/*
#include <stdio.h>

int	main(void)
{
	size_t nmemb = 2254012456121040 * 4451454654897487479;
	size_t size = 0;

	char *p = ft_calloc(nmemb , size);
	char *d = calloc(nmemb, size);
	printf("RES: %s\n", p);
	printf("dyalhoum %s\n", d);

}*/