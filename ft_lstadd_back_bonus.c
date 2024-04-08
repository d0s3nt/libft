#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}

/*
#include <stdio.h>

int	main(void) {
		int data_values[] = {42, 57, 23, 11, 45, 12, 0, 45};

					t_list *head = NULL;
	int *data;


		for (size_t i = 0; i < sizeof(data_values)
			/ sizeof(data_values[0]); i++) {
				data = (int *)malloc(sizeof(int));
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
	int value = 999;
	t_list	*new;

	data = (int *)malloc(sizeof(int));
	if (!data)
		return (1);
	*data = value;
	new = ft_lstnew(data);
	if (!new)
	{
		free(data);
		return (1);
	}
	ft_lstadd_back(&head,new);
	t_list *temp = head;
	while (temp != NULL)
	{
		printf("%d -> ", *(int *)temp -> content);
		temp =  temp -> next;
	}
	t_list *tracker;
	while (head != NULL)
	{
		tracker = head -> next;
		free(head -> content);
		free(head);
		head = tracker;
	}

}*/
