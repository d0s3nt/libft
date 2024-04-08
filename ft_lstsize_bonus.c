#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/*
int	main(void) {
		int data_values[] = {42, 57, 23, 11, 45, 12, 0, 45};

		t_list *head = NULL;

		for (size_t i = 0; i < sizeof(data_values)
			/ sizeof(data_values[0]); i++) {
				int *data = (int *)malloc(sizeof(int));
				if (!data) {
						return (1);
				}
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
	size = ft_lstsize(head);
	printf("%d", size);
		while (head != NULL) {
				t_list *temp = head;
				head = head->next;
				free(temp->content);
				free(temp);
		}

		return (0);
}*/
