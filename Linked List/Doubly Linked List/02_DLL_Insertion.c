//Insert at Beginning of the Linked List
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
	//Create a Node
	struct Node *newNode;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	
	//Assign value
	newNode->data=val;
	
	//Check Linked List is empty or not
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
	printf("%d insert successfully at the Beginning Position\n",val);
}
void display()
{
	struct Node *temp=head;
	printf("\nForward Direction\n");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
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
	display();
}
