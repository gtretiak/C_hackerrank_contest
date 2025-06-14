#include <stdlib.h>
#include <stdio.h>

typedef struct Node
{
    int data;
    struct Node* next;
}	Node;

Node	*ft_find_last(Node *head)
{
	while (head->next)
		head = head->next;
	return (head);
}

Node* insert(Node *head,int data)
{
	Node	*new;
	Node	*last;

	new = malloc(sizeof(Node));
	new->data = data;
	new->next = NULL;
	last = NULL;
	if (!head)
		head = new;
	else
	{
		last = ft_find_last(head);
		last->next = new;
	}
	return (head);
}

void	ft_free(Node *head)
{
	Node	*tmp;
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

void display(Node *head)
{
	Node *start=head;
	printf("Displaying..:");
	while(start)
	{
		printf("%d",start->data);
		if (start->next)
			printf(" ");
		start=start->next;
	}
}
int main()
{
	int T,data;
	printf("Enter the number of nodes to insert: ");
    scanf("%d",&T);
    Node *head=NULL;
    printf("Now insert %d integers...\n", T);
    while(T-->0)
    {
        scanf("%d",&data);
        head=insert(head,data);
    }
  display(head);
  ft_free(head);
}
