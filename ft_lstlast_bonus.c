#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
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
		int size;
		size = *(int *)ft_lstlast(head -> content);
		printf("%d", size);
		while (head != NULL) {
				t_list *temp = head;
				head = head->next;
				free(temp->content);
				free(temp);
		}

		return (0);
}*/
