#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)s + i);
		--i;
	}
	return (NULL);
}
/*
int	main(int argc, char **argv)
{
	char *p ;
	char *d;

	if ( argc == 3)
	{
		p = ft_strrchr(argv[2], argv[1][0]);
		d = strrchr(argv[2], argv[1][0]);
		printf("dyale :: char %c ,starting from  %s\n", argv[1][0],p);
		printf("original ::  char %c, starting from %s\n", argv[1][0], d);
	}
}*/
