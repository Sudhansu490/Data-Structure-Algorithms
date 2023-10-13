//Deletion at End Position
#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
};
struct Node *head=NULL;
void insertBegin(int);
void insertBegin(int val)
{
	struct Node *newNode;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=val;
	if(head==NULL)
	{
		newNode->prev=NULL;
		newNode->next=NULL;
		head=newNode;
	}
	else
	{
		newNode->prev=NULL;
		newNode->next=head;
		head->prev=newNode;
		head=newNode;
	}
	printf("%d inserted Successfully\n",val);
}
void deleteEnd();
void deleteEnd()
{
	if(head==NULL)
	{
		printf("\nDeletion Not Possible\n");
	}
	else if(head->next==NULL)
	{
		free(head);
		head=NULL;
	}
	else
	{
		struct Node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->prev->next=NULL;
		free(temp);
	}
}
void display()
{
	struct Node *temp=head;
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
int main()
{
	insertBegin(10);
	insertBegin(20);
	insertBegin(30);
	insertBegin(40);
	insertBegin(50);
	deleteEnd();
	display();
	return 0;
}
