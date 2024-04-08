#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	ch;

	i = 0;
	ch = (char)c;
	while (s[i] != ch)
	{
		if (s[i] == '\0')
			return (NULL);
		i++;
	}
	return ((char *)s + i);
}
/*
int	main(int argc, char **argv)
{
	char *p ;
	char *d;

	if ( argc == 3)
	{
		p = ft_strchr(argv[2], argv[1][0]);
		d = strchr(argv[2], argv[1][0]);
		printf("dyale :: char %c ,starting from  %s\n", argv[1][0],p);
		printf("original ::  char %c, starting from %s\n", argv[1][0], d);
	}
	}*/
