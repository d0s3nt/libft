#include "libft.h"
#include <stdio.h>

static int	ft_count(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static int	word_size(const char *s, char c)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (s[i] && s[i] != c)
	{
		size++;
		i++;
	}
	return (size);
}

void	*ft_free(char **ptr, int j)
{
	while (j >= 0)
		free(ptr[j--]);
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;
	int		k;

	j = 0;
	ptr = (char **)malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	while (ft_count(s, c) > j)
	{
		k = 0;
		while (s[i] == c && s[i])
			i++;
		ptr[j] = (char *)malloc(sizeof(char) * (word_size(&s[i], c) + 1));
		if (!ptr[j])
			return (ft_free(ptr, j));
		while (s[i] != c && s[i])
			ptr[j][k++] = s[i++];
		ptr[j++][k] = '\0';
	}
	ptr[j] = NULL;
	return (ptr);
}
/*
int	main(void)
{
	char	*ptr;
	char	**new;
	int	i;

	i = 0;
	ptr = "+++lr++jgi++h+++";

	new = (ft_split(NULL, '+'));
	while (new[i])
	{
		printf("%s\n" , new[i]);
		i++;
	}
	return (0);
}*/
