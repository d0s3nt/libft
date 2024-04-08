#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	new_lst = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if (!node)
		{
			ft_lstclear(&node, (*del));
			free(new_lst);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, node);
		lst = lst->next;
	}
	return (new_lst);
}
/*
#include <stdio.h>

void	del(void *p)
{
	if (!p)
		return ;
	free(p);
}

void	*f(void *ptr)
{
	if (!ptr)
		return (NULL);
	*(int *)ptr += 1;
	return (ptr);
}

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
		while   (Node != NULL)
		{
				t_list *tmp = Node;
				Node = Node -> next;
				free(tmp -> content);
				free(tmp);
		}
		return (0);
}*/
