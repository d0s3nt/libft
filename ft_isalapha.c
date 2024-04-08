#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

/*int main ()
{
	int  a = 122;
	int  b = 99;
	printf("%d %d\n", isalpha(a),isalpha(b));
	printf("%d %d\n", isalpha(a), isalpha(b));
}*/
