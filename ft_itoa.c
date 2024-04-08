#include "libft.h"

static int	counter(long n, int *sign)
{
	int	count;

	*sign = 0;
	count = 1;
	if (n < 0)
	{
		n *= -1;
		count++;
		*sign = 1;
	}
	while (n > 9)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		count;
	char	*str;
	int		i;
	int		sign;
	long	num;

	i = 0;
	num = n;
	count = counter(num, &sign);
	str = (char *)malloc(sizeof(char) * count + 1);
	if (!str)
		return (NULL);
	str[count] = 0;
	if (num < 0)
	{
		num *= -1;
		str[0] = '-';
	}
	while (i < count - sign)
	{
		str[count - i++ - 1] = num % 10 + '0';
		num = num / 10;
	}
	return (str);
}
/*
#include <stdlib.h>

int	main(void)
{
	//printf("%d\n", counter(-10));
	printf("%i\n",counter(-450));
	printf("result : %s\n", ft_itoa(INT_MIN));
}
*/
