//Deletion at Beginning Position
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
void deleteBegin();
void deleteBegin()
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
		head=head->next;
		head->prev=NULL;
		free(temp);
	}
}
void display()
{
	struct Node *temp=head;
	while(temp!=NULL)
	{
		printf("\n%d\n",temp->data);
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
	deleteBegin();
	display();
	return 0;
}
