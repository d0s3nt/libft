#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*int main()
{
	printf("%d , %d\n",  isdigit(49),isdigit(58));
	printf("%d , %d\n",  ft_isdigit(49),ft_isdigit(58));
}*/
