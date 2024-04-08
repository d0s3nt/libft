
#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!f)
		return ;
	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*
void	f(unsigned int i, char *s)
{
	s[i] = '?';
}

int	main(void)
{
	char A[] = "wa fhjdgh";

	ft_striteri(A, &f);
	printf("%s", A);
}*/
