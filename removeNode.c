#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

typedef struct Node
{
    int data;
    struct Node* next;
}Node;

Node* removeDuplicates(Node *head)
{
	Node	*list;
	Node	*tmp;

	list = head;
	while (list && list->next)
	{
		if (list->data == list->next->data)
		{
			tmp = list->next;
			list->next = list->next->next;
			free(tmp);
		}
		else
			list = list->next;
	}
	return (head);
}

Node* insert(Node *head,int data)
{
  Node *p = (Node*)malloc(sizeof(Node));
  p->data = data;
  p->next=NULL;   
  
  if(head==NULL){
   head=p;  
  
  }
  else if(head->next==NULL)
  {
      head->next=p;
      
  }
  else{
  Node *start=head;
  while(start->next!=NULL)
    start=start->next;
  
  start->next=p;   
  
  }
      return head;
}
void display(Node *head)
{
	Node *start=head;
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
	printf("Enter the number of nodes to be inserted: ");
    scanf("%d",&T);
    Node *head=NULL;
    printf("Now insert in the non-decreasing order %d integers to the list.\n", T);
    while(T-->0){
        scanf("%d",&data);
        head=insert(head,data);
    }
    printf("Removing duplicates...Returning the head of the updated list...\n");
    head=removeDuplicates(head);
    printf("Displaying..:");
    display(head);	
}

