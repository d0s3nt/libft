#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*p;
	int		d;

	i = ft_strlen(s);
	d = 0;
	p = (char *)malloc((sizeof(char) * i) + 1);
	if (!p)
		return (NULL);
	while (*s)
	{
		p[d] = *s++;
		d++;
	}
	p[d] = '\0';
	return (p);
}
