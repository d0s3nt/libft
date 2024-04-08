#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(char *)(s + i) = '\0';
		i++;
	}
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{

	// //char A[10] = "123456789";
	// char *B = NULL;
	// int i = 0;

	// printf("dyale ::9bel b_zero %s\n" , A);
	// t_bzero(B, 10);
	// printf("mn ba3d bzero");
	// while(A)
	// printf("%c", A[i++]);
	// i = 0;
	// printf("dyalhoumn :: 9bel bzero %s", B);
	// bzero(B, 10);
	// printf("mn ba3d bzero");
	// 	while(B[i])
	// 			printf("%c", B[i++]);


}*/