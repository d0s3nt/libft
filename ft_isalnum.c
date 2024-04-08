#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 48 && c <= 57) || ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)))
		return (1);
	return (0);
}
/*
int	main(void)
{
	printf("original : %d,  space expected 0\n", ft_isalnum(' '));
	printf("dyalhoum : %d, space expected 0\n", isalnum (' '));
	printf("original : %d, 45 expected 0\n", ft_isalnum(45));
	printf("dyalhoum : %d, 45   expected 0\n", isalnum (45));
	printf("original : %d, 57 expected 1\n", ft_isalnum(57 ));
	printf("dyalhoum : %d, 57 expected 1\n", isalnum (57));
}*/
