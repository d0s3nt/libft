#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ptr;

	i = 0;
	if (!s || !f)
		return (NULL);
	ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!ptr)
		return (NULL);
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

/*char	f(unsigned int i, char s)
{
	i = 0;
	s = 'A' + i;
	printf("f\n");
	return (s);
}

int	main(void)
{
	char *A = "wa fhjdgh";
	char *B;

	B = ft_strmapi(A, &f);
	printf("%s", B);
}*/
