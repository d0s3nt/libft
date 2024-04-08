
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int	main(void) {
	int data_values[] = {42, 57, 23, 11, 47, 1};

	t_list *Node = NULL;
	size_t i = (sizeof(data_values) / sizeof(data_values[0]));
	while (i-- > 0)
	{
	t_list *new;
	int *data;
	data = (int *)malloc(sizeof(int));
	if (!data)
		return (1);
	*data = data_values[i];
	new  = ft_lstnew(data);
	if (!new)
	{
		free(data);
		return (1);
	}
	new->next = Node;
	Node = new;
	}

	t_list *current =  Node;
	while (current != NULL)
	{
	printf("%d -> ", *((int *)current->content));
	current =  current -> next;
	}
	while	(Node != NULL)
	{
		t_list *tmp = Node;
		Node = Node -> next;
		free(tmp -> content);
		free(tmp);
	}
	return (0);
}*/
