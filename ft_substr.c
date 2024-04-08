#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	i;
	size_t	slen;
	size_t	end;

	i = 0;
	end = 0;
	slen = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start < slen)
		end = slen - start;
	if (end > len)
		end = len;
	p = (char *)malloc(sizeof(char) * (end + 1));
	if (!p)
		return (NULL);
	while (i < end)
	{
		p[i] = s[start];
		i++;
		start++;
	}
	p[i] = '\0';
	return (p);
}
/*
int	main(void)
{
	char A[] = "asdfghjklo";
	char *tmp;

	tmp = ft_substr(A, 8, 5);
	printf("%s", tmp);
}*/
