

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	int value = 78;
	t_list *node;
	int *data = (int *)malloc(sizeof(int));
	if (!data)
		return (1);
	*data = value;
	node =  ft_lstnew(data);
	if (!node)
	{
		free(node);
		return (1);
	}
	int front = 45;
	t_list *new;
	int *chil3ba = (int *)malloc(sizeof(int));
	if (!chil3ba)
		return (1);
	*chil3ba = front;
	new = ft_lstnew(chil3ba);
	if (!new)
	{
		free(new);
		return (1);
	}
	ft_lstadd_front(&node,  new);
	t_list *temp;
	while (node != NULL)
	{
		printf("%d -> ", *(int *)node -> content);
		temp = node;
		node = node -> next;
		free(temp -> content);
		free(temp);
	}
	return (0);
}*/
