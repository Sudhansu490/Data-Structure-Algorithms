//Find the Middle Node of a Single Linked List without using Loop
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head=NULL;
void insertlast(int);
void insertlast(int val)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=val;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		struct node *temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
	printf("%d inserted successfully\n",val);
}
void getMiddleNode()
{
	struct node *slow,*fast;
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
	insertlast(10);
	insertlast(20);
	insertlast(30);
	insertlast(40);
	insertlast(50);
    getMiddleNode();
	return 0;
}
