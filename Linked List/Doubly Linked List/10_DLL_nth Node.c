//Get nth Node of Doubly Linked List
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
int get_nth_Node(int index)
{
	struct Node *temp=head;
	int i=0;//counter
	while(temp!=NULL)
	{
		if(i==index)
		{
			printf("\nThe nth Node is %d\n",temp->data);
			return temp->data;
		}
		i++;
		temp=temp->next;
	}
	return -1;
}
int main()
{
	insertBegin(10);
	insertBegin(20);
	insertBegin(30);
	insertBegin(40);
	insertBegin(50);
	get_nth_Node(3);
	return 0;
}
