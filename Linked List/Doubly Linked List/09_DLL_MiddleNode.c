//Find the Middle Node of Doubly Linked List
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
	printf("%d insert successfully at the Beginning Position\n",val);
}
void getMiddleNode()
{
	struct Node *slow,*fast;
	slow=fast=head;
	if(head==NULL)
	{
		printf("\nLinked List is Empty\n");
	}
	else
	{
		while (fast!=NULL && fast->next!=NULL)
		{
			slow=slow->next;
			fast=fast->next->next;
		}
		printf("\nMIddle Node value is %d\n",slow->data);
	}
}
int main()
{
	insertBegin(10);
	insertBegin(20);
	insertBegin(30);
	insertBegin(40);
	insertBegin(50);
	insertBegin(60);
	getMiddleNode();
	return 0;
}
