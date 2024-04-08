#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
#include <fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("./c.txt", O_WRONLY | O_CREAT );
	ft_putstr_fd("", fd);
}*/
