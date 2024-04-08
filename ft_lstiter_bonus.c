

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*ptr;

	if (!lst || !f)
		return ;
	while (lst)
	{
		ptr = lst->next;
		(*f)(lst->content);
		lst = ptr;
	}
}
/*
#include <stdio.h>

void	f(void *ptr)
{
	if (!ptr)
		return ;
	ft_strlcpy(ptr, "0", 1);
}

int	main(void)
{
	int		data_values[] = {42, 57, 23, 11, 45, 12, 0, 45};
	t_list	*head;
	int		*data;
	t_list	*newNode;
	t_list	*temp;
	t_list	*tracker;

	head = NULL;
	for (size_t i = 0; i < sizeof(data_values) / sizeof(data_values[0]); i++)
	{
		data = (int *)malloc(sizeof(int));
		if (!data)
			return (1);
		*data = data_values[i];
		newNode = ft_lstnew(data);
		if (!newNode)
		{
			free(data);
			return (1);
		}
		newNode->next = head;
		head = newNode;
	}
	ft_lstiter(head, f);
	temp = head;
	while (temp != NULL)
	{
		printf("%d -> ", *(int *)temp->content);
		temp = temp->next;
	}
	while (head != NULL)
	{
		tracker = head->next;
		free(head->content);
		free(head);
		head = tracker;
	}
}*/
