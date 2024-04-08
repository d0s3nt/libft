#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*ptr;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		ptr = (*lst)->next;
		(*del)((*lst)->content);
		free(*lst);
		(*lst) = ptr;
	}
	*lst = NULL;
}
/*
void	del(void *p)
{
	if (!p)
		return ;
	free(p);
}

#include <stdio.h>

int	main(void) {

	int data_values[] = {42, 57, 23, 11, 45, 12, 0, 45};
		t_list *head = NULL;

		for (size_t i = 0; i < sizeof(data_values)
			/ sizeof(data_values[0]); i++) {
				int *data = (int *)malloc(sizeof(int));
				if (!data)
						return (1);
				*data = data_values[i];
				t_list *newNode = ft_lstnew(data);
				if (!newNode) {
						free(data);
						return (1);
				}
				newNode->next = head;
					head = newNode;
		}
	ft_lstclear(&head, del);
	if (!head)
		printf("bye bye\n");
}*/
