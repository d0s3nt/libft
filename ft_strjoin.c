#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		y;
	int		x;
	char	*p;
	int		d;

	x = 0;
	d = 0;
	if (!s1 || !s2)
		return (NULL);
	i = ft_strlen(s1);
	y = ft_strlen(s2);
	p = (char *)malloc(sizeof(char) * (i + y + 1));
	if (!p)
		return (NULL);
	while (s1[x])
	{
		p[x] = s1[x];
		x++;
	}
	while (s2[d])
		p[x++] = s2[d++];
	p[x] = '\0';
	return (p);
}
/*
int	main(void)
{
	char A[] = "allo allo";
	char B[] = "test";
	printf("%s\n", ft_strjoin(A, B));
}*/
