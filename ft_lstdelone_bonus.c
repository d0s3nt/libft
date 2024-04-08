
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	(*del)(lst->content);
	free(lst);
}

/*void del(void *p)
{
	if (!p)
		return ;
	free(p);
}


#include <stdio.h>

int	main(void) {
		int data_values[] = {42, 57, 23, 11, 45, 12, 0, 45};
		t_list *head = NULL;
	//t_list *tracker = head;
		int *data;

		size_t i = sizeof(data_values) / sizeof(data_values[0]) + 1;
		while (i--  > 0) {
				data = (int *)malloc(sizeof(int));
				if (!data)
						return (1);
				*data = data_values[i];

				t_list *newNode = ft_lstnew(data);
				if (!newNode) {
						free(data);
						return (1);
				}
				newNode -> next = head;
		head = newNode;
		}
		t_list *temp = head;
		printf("before deleone\n");
		while (temp->next != NULL)
		{
				printf("%d  :", *(int *)temp -> content);
				temp =  temp -> next;
		}
		printf("\nafter delone  ");
		t_list *new = head;
		i = 0;
		while  (i < 4 && new != NULL)
	{
		new = new -> next;
		i++;
	}
		t_list *tmp;
		tmp = new -> next;
		ft_lstdelone(new, del);
		i = 0;
		while (head->next != NULL && i < 4)
		{
				printf("%d -> ", *(int *)head -> content);
				head  =  head -> next;
				i++;
		}
		while (tmp -> next != NULL)
		{
				printf("%d -> ", *(int *)tmp -> content);
				tmp  =  tmp -> next;
		}
		t_list *track;
		while (head -> next != NULL)
		{
				track = head -> next;
				free(head -> content);
				free(head);
				head = track;
		i++;
		}
}*/
