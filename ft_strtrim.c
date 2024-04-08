#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		d;
	int		i;

	i = 0;
	p = NULL;
	if (s1 && set)
	{
		d = ft_strlen(s1);
		while (ft_strchr(set, s1[i]) && s1[i])
			i++;
		while (s1[d - 1] && ft_strchr(set, s1[d - 1]) && d > i)
			d--;
		p = (char *)malloc(sizeof(char) * (d - i + 1));
		if (!p)
			return (NULL);
		ft_strlcpy(p, &s1[i], d - i + 1);
	}
	return (p);
}
/*
#include <stdio.h>

int	main(void)
{
	char A[] = "ttesttdhnb dj)+*4allotest";
	char B[] =  "test";
	//ft_strtrim(, "fdgkj");
	printf("Result :: %s", ft_strtrim(A, B));
}*/
