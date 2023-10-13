//inserted at specified position using value
#include<stdio.h>
#include<stdlib.h>
struct Node{
	int data;
	struct Node *next;
};
struct Node *head=NULL;
void insertEnd(int);
void insertEnd(int val)
{
	struct Node *newNode;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=val;
	newNode->next=NULL;
	if(head==NULL)
	{
		head=newNode;
	}
	else
	{
		struct Node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newNode;
	}
	printf("%d inserted successfully\n",val);
}
void insertspecific(int);
void insertspecific(int val)
{
	struct Node *newNode,*temp=head;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=val;
	newNode->next=NULL;
	while(temp->data!=30)
	{
		temp=temp->next;
	}
	newNode->next=temp->next;
	temp->next=newNode;
	printf("\n%d inserted at specified position\n",val);
}
void display()
{
	struct Node *temp=head;
	printf("\n The Values are\n");
	while(temp!=NULL)
	{
		printf("%d\t",temp->data);
		temp=temp->next;
	}
}
int main()
{
	insertEnd(10);
	insertEnd(20);
	insertEnd(30);
	insertEnd(40);
	insertspecific(999);
	display();
	return 0;
}
