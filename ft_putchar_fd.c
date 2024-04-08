#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("./b.txt", O_WRONLY | O_CREAT );
	ft_putchar_fd('A', fd);
}*/
