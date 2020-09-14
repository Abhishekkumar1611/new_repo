
#include"header.h"

typedef struct sll
{
	int data;
	struct sll *link;
}node;

node *first = NULL;
node *last = NULL;

void create(int ele)
{
	node *new = (node *)malloc(sizeof(node));
	new->data = ele;
	new->link = NULL;

	if(first==NULL)
	{
		first=new;
		last=new;
	}
	else
	{
		last->link = new;
		last = new;
	}
}

void display()
{
	if(first == NULL)
	{
		printf("List is empty\n");
		return;
	}
	else
	{
		node *temp = first;
		do
		{
			printf("%d\n",temp->data);
			temp = temp->link;
		}while(temp!=NULL);
	}
}


